#ifndef _lacuna_defined_
#define _lacuna_defined_

/* run: c-embed -1 lacuna lacuna_0.tga */

#if defined(__cplusplus)
extern "C" {
#endif

extern const unsigned char
	embed_1[];

typedef struct {
	const char *image;
	const unsigned char *pixels;
	int size, width, height, channels;
	} EmbedImageItem;

const static EmbedImageItem embed_lacuna[] = {
	{"lacuna_0.tga", embed_1, 65536, 1024, 16, 1},
	{NULL, NULL, 0, 0, 0, 0}
};
const static int embed_lacuna_count = 1;

#if defined(__cplusplus)
}
#endif
#endif // of lacuna
