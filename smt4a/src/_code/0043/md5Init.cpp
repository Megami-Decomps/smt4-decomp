#include "shard/Shard0043.h"

extern "C" {

typedef struct Md5Ctx {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 a;
    /* 0x08 */ u32 b;
    /* 0x0C */ u32 c;
    /* 0x10 */ u32 d;
    /* 0x14 */ u32 length;
} Md5Ctx;

/* Initializes an MD5 context with the standard start values. */
void md5Init(Md5Ctx *ctx)
{
    ctx->a = 0x67452301;
    ctx->b = 0xEFCDAB89;
    ctx->c = 0x98BADCFE;
    ctx->d = 0x10325476;
    ctx->length = 0;
}

} /* extern "C" */
