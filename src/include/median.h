#ifndef __MEDIAN_H__
#define __MEDIAN_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>
#include <stddef.h>
#include <math.h>
#include <malloc.h>

struct median_filter_t {
	float * buffer;
	int * index;
	int length;
	int position;
	int count;
};

struct median_filter_t * median_alloc(int length);
void median_free(struct median_filter_t * filter);
float median_update(struct median_filter_t * filter, float value);

#ifdef __cplusplus
}
#endif

#endif /* __MEDIAN_H__ */
