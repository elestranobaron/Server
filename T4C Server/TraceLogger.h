#ifndef VIRCOMLIB_TRACER_TH083231012999
#define VIRCOMLIB_TRACER_TH083231012999

#include "Logger.h"

namespace vir {

class TraceLogger : public Logger {
// This class is a logger that log to the Debug Screen.
	
	public: 
		void SetLogLevel(DEBUG_LEVEL dl) {
		// Set the Debug Level.
			dlDebugLevel = dl;
		}

	protected:

		void LogAnsi( DEBUG_LEVEL dl, char *s ) {

			if ( dl & dlDebugLevel )  {
			// The DebugLevel asked is active.
#ifdef UNICODE
			
				wchar ws[1024];
			
				// Output in Unicode.			
				OutputDebugString( AnsiToUnicode()( s, ws ) );
#else
				// Output in Ansi.
				OutputDebugString( s );
#endif
			}
		};

		void LogUnicode( DEBUG_LEVEL dl, wchar_t *ws ) {

			if ( dl & dlDebugLevel ) {
			// The DebugLevel asked is active.
#ifndef UNICODE
				char s[1024];
			
				// Output in Ansi
				OutputDebugString( UnicodeToAnsi()( ws, s ) );
#else
				// Output in Unicode.
				OutputDebugString( ws );
#endif
			}
		}
};

} // End of namespace vir

#endif