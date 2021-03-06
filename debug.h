// $Id: debug.h,v 1.2 2016-05-09 16:01:56-07 - - $

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <string>
#include <vector>

//*****************
#define DEBUG 1 //*
#define ERROR 1 //*
//*****************

//DEBUGF
#if DEBUG
#define DEBUGF(CODE) { \
            std::cout << __FILE__ << "[" << __LINE__ << "] "\
            	<< __func__ << ": " << CODE << std::endl; \
        }
#else
#define DEBUGF(CODE) ;
#endif

//DEBUGF
#if ERROR
#define ERRORF(CODE) { \
            std::cerr << __FILE__ << "[" << __LINE__ << "] "\
            	<< __func__ << ": " << CODE << std::endl; \
        }
#else
#define ERRORF(CODE) ;
#endif

#endif