#ifndef APPROXIDATE_H
#define APPROXIDATE_H

//#include "strbuf.h"

#include <sys/time.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * @param date The date string
 * @param tv Where the time will be placed.
 *
 * @return 0 on success
 * @return 1 on error
 */
#ifdef __cplusplus
extern "C" {
#endif
unsigned long approxidate_relative(const char *date, const struct timeval *tv);
unsigned long approxidate_careful(const char *date, int *error_ret);
#ifdef __cplusplus
}
#endif
#endif