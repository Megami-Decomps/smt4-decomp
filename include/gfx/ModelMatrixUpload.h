#ifndef GFX_MODEL_MATRIX_UPLOAD_H
#define GFX_MODEL_MATRIX_UPLOAD_H
#include "common.h"
#include <stddef.h>

struct ModelCommandWriter {
    /* 0x00 */ u32 *cursor;
    /* 0x04 */ u32 *begin;
    /* 0x08 */ u32 *segmentBegin;
    /* 0x0C */ u32 *segmentSize;
    /* 0x10 */ u32 firstSegmentBytes;
};
struct ModelMatrixUploadOwner {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ ModelCommandWriter *writer;
    /* 0xB0 */ u8 unkB0[2];
    /* 0xB2 */ u8 projectionRegister;
    /* 0xB3 */ u8 unkB3[7];
    /* 0xBA */ u8 modelRegister;
};
struct ModelMatrixUploadSource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 program;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ const u32 *commands;
    /* 0x14 */ u32 wordCount;
    /* 0x18 */ u8 unk18[0x24];
    /* 0x3C */ f32 projection[16];
    /* 0x7C */ f32 model[12];
};
typedef char ModelCommandWriterLayoutCheck[sizeof(ModelCommandWriter) == 0x14 &&
    offsetof(ModelCommandWriter, segmentBegin) == 8 &&
    offsetof(ModelCommandWriter, segmentSize) == 12 ? 1 : -1];
typedef char ModelMatrixUploadOffsetsCheck[
    offsetof(ModelMatrixUploadOwner, writer) == 0xAC &&
    offsetof(ModelMatrixUploadOwner, projectionRegister) == 0xB2 &&
    offsetof(ModelMatrixUploadOwner, modelRegister) == 0xBA &&
    offsetof(ModelMatrixUploadSource, projection) == 0x3C &&
    offsetof(ModelMatrixUploadSource, model) == 0x7C ? 1 : -1];
#endif
