#ifndef __c_bstr_h__
#define __c_bstr_h__

#include <c_object.h>
#include <streamable.h>

struct c_bstr_t{
	__u16	count;
	char	*buffer;
}PACKED;

#ifdef __cplusplus
extern "C"{
#endif

char * c_alloc_string(int size);

void c_free_str(char * s);

#define c_free_bstr(b)\
do{\
	if((b)->buffer){\
		c_free_str((b)->buffer);\
		(b)->buffer = 0;\
	}\
}while(0)

#define initialize_bstr(b, str)\
do{\
	(b)->buffer = (str);\
	(b)->count = strlen(str);\
}while(0)

char * c_strdup(const char * src);

__bool bstr_from_stream(struct c_bstr_t * b, IF8Stream *s);

__bool bstr_from_memstream(struct c_bstr_t * b, IMemStream *s);

void bstr_to_stream(struct c_bstr_t * b, IF8Stream *s);

#ifdef __cplusplus
}
#endif

#endif
