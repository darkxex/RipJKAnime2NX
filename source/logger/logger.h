#ifndef NXMP_LOGGER_H
#define NXMP_LOGGER_H

#include <iostream>
#include <cstdio>
#include <cstdarg>

namespace NXLOG{
	
	extern int loglevel;
	
	
	void INFOLOG(const char *fmt, ...);
	void ERRORLOG(const char *fmt, ...);
	void DEBUGLOG(const char *fmt, ...);
	
	
}


#endif