
#ifndef __Define_H__
#define __Define_H__

#include <vector>
#include <string>
#include <map>
#include <cmath>

#ifdef WIN32
	#define MOBA_API __declspec(dllexport)
    #define SAFE_STRTOK strtok_s
#else
	#define MOBA_API extern
    #define SAFE_STRTOK strtok_r
#endif


#define VERSION_BIG    "1"
#define VERSION_SMALL  "1"
#define VERSION_STRING "1.2"



#endif