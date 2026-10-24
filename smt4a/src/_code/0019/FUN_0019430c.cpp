/* NON_MATCHING: writes the GPU command stream that uploads a skinned mesh's bone matrices (per batch: either bone x bind-pose products, a plain copy of the bone matrices, or a single matrix, each as float24 uniform rows with reversed components, followed by the batch's trailing data); written from the decompilation, the matrix buffer is one array instead of the decompiler's split locals and the source/out parameters of gpuCmdWriteCopy are recovered from its call site */
#include "common.h"

#define BATCH_FLAG_PRODUCT 1
#define BATCH_FLAG_COPY 2
#define BATCH_MAX_BONES 0x4D
#define MATRIX_WORDS 12
#define MATRIX_ROWS 3
#define MATRIX_BONE_STRIDE 0x30
#define BIND_POSE_STRIDE 100
#define BIND_POSE_OFFSET 0x2C
#define CMD_HEADER_FLAG 0x80000000
#define CMD_UNIFORM_INDEX 0xF02C0
#define CMD_UNIFORM_DATA 0xF02C1
#define CMD_UNIFORM_SINGLE_DATA 0xBF02C1
#define CMD_ROW_COUNT_SHIFT_UNIT 0x400000
#define CMD_ROW_COUNT_BIAS 0x100000

/* One skinning batch of a mesh (observed fields, 0x34 bytes). */
struct SkinBatch {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 boneCount;
    /* 0x04 */ u16 bones[0x14];
    /* 0x2C */ u32 trailingSize;
    /* 0x30 */ u32 unk30;
};

struct SkinModel {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 *bindPoses;
};

struct SkinMesh {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 prefix;
    /* 0x0C */ s32 prefixWords;
    /* 0x10 */ SkinBatch *batches;
    /* 0x14 */ s32 batchCount;
    /* 0x18 */ u32 suffix;
    /* 0x1C */ s32 suffixWords;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ SkinModel *model;
};

struct SkinSkeleton {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 *bones;
};

struct SkinParams {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 unitId;
};

/* The command stream being written. */
struct CmdStream {
    /* 0x00 */ u32 *cursor;
    /* 0x04 */ s32 base;
    /* 0x08 */ s32 mark;
    /* 0x0C */ u32 *lastMark;
    /* 0x10 */ s32 firstSize;
};

extern "C" {
void FUN_001a063c(CmdStream *stream, u32 commands, s32 bytes);
void FUN_0019a270(u32 *out, const u8 *matrix, u32 command);
void nn_math_ARMv6_MTX34MultAsm(f32 *out, const u8 *boneMatrix, const u8 *bindPose);
s32 gpuCmdPadToAlign16(s32 cursor, s32 offset);
s32 gpuCmdWriteCopy(s32 cursor, s32 *mark, s32 size);

/* Writes `rows` vec4 rows with their components reversed (w, z, y, x) after the two-word command header. */
static __inline u32 *emitUniformRows(CmdStream *stream, u32 unitId, const u32 *rows, s32 rowCount)
{
    u32 *out = stream->cursor;
    out[0] = unitId | CMD_HEADER_FLAG;
    out[1] = CMD_UNIFORM_INDEX;
    out[2] = rows[3];
    out[3] = (rowCount * CMD_ROW_COUNT_SHIFT_UNIT - CMD_ROW_COUNT_BIAS) | CMD_UNIFORM_DATA;
    out[4] = rows[2];
    out[5] = rows[1];
    out[6] = rows[0];
    u32 *tail = out + 7;
    for (s32 row = 1; row < rowCount; row++) {
        const u32 *src = rows + row * 4;
        tail[0] = src[3];
        tail[1] = src[2];
        tail[2] = src[1];
        tail[3] = src[0];
        tail += 4;
    }
    *tail = 0;
    return tail + 1;
}

void FUN_0019430c(SkinMesh *mesh, CmdStream *stream, SkinSkeleton *skeleton, SkinParams *params)
{
    FUN_001a063c(stream, mesh->prefix, mesh->prefixWords << 2);
    SkinBatch *batch = mesh->batches;
    SkinBatch *end = batch + mesh->batchCount;
    s32 copyMark[5];
    u32 matrices[BATCH_MAX_BONES * MATRIX_WORDS];

    for (; batch != end; batch++) {
        if ((batch->flags & BATCH_FLAG_PRODUCT) != 0) {
            for (s32 i = 0; i < batch->boneCount; i++) {
                nn_math_ARMv6_MTX34MultAsm(
                    reinterpret_cast<f32 *>(matrices + i * MATRIX_WORDS),
                    skeleton->bones + batch->bones[i] * MATRIX_BONE_STRIDE,
                    mesh->model->bindPoses + batch->bones[i] * BIND_POSE_STRIDE + BIND_POSE_OFFSET);
            }
            stream->cursor = emitUniformRows(stream, params->unitId, matrices, batch->boneCount * MATRIX_ROWS);
        } else if ((batch->flags & BATCH_FLAG_COPY) != 0) {
            for (s32 i = 0; i < batch->boneCount; i++) {
                const u32 *bone = reinterpret_cast<const u32 *>(skeleton->bones + batch->bones[i] * MATRIX_BONE_STRIDE);
                for (s32 w = 0; w < MATRIX_WORDS; w++)
                    matrices[i * MATRIX_WORDS + w] = bone[w];
            }
            stream->cursor = emitUniformRows(stream, params->unitId, matrices, batch->boneCount * MATRIX_ROWS);
        } else {
            u32 *out = stream->cursor;
            out[0] = params->unitId | CMD_HEADER_FLAG;
            out[1] = CMD_UNIFORM_INDEX;
            FUN_0019a270(out + 2, skeleton->bones + batch->bones[0] * MATRIX_BONE_STRIDE, CMD_UNIFORM_SINGLE_DATA);
            stream->cursor = out + 0x10;
        }

        s32 cursor = reinterpret_cast<s32>(stream->cursor);
        if (cursor != 0 && batch->trailingSize != 0) {
            cursor = gpuCmdPadToAlign16(cursor, ((cursor - stream->mark) & ~3) + 0x18);
            stream->cursor = reinterpret_cast<u32 *>(cursor);
            cursor = gpuCmdWriteCopy(cursor, copyMark, batch->trailingSize);
            stream->cursor = reinterpret_cast<u32 *>(cursor);
            if (stream->lastMark != NULL)
                *stream->lastMark = (u32)(cursor - stream->mark) >> 3;
            stream->mark = reinterpret_cast<s32>(stream->cursor);
            stream->lastMark = reinterpret_cast<u32 *>(copyMark[0]);
            if (stream->firstSize == 0)
                stream->firstSize = (reinterpret_cast<s32>(stream->cursor) - stream->base) & ~3;
        }
    }
    FUN_001a063c(stream, mesh->suffix, mesh->suffixWords << 2);
}

} /* extern "C" */
