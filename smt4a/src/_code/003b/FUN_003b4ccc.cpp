/* NON_MATCHING: near-structure only: same maths (block colour x effect tint x part colour, packed back as ARGB bytes) but retail schedules the four-channel unpack/multiply with different VFP register allocation (s16 scale, s17-s20 saved product, s21 255.0, packed bytes assembled by rev/bit-field byte stores into the object colour) and a 68-byte frame, ours builds a 96-byte frame and a plain word store */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

/* One 4-channel colour scratch pair used while tinting (the retail image keeps it in globals):
 * `current` is the unpacked colour of the part being tinted, `tint` the tint it is multiplied by. */
struct TintScratch {
    f32 current[4];   /* 0x6472DC */
    f32 tint[4];      /* 0x6472EC */
};

struct TintObject {
    u16 flags;        /* 0x00: bit 0x100 = tinted */
    u8 pad02[0x0E];
    u8 transform[0x40]; /* 0x10 */
    u32 color;        /* 0x50: packed colour, high byte first */
};

/* Entry of the part list, stride 0x10. */
struct TintPart {
    TintObject *object;   /* 0x00 */
    s32 ready;            /* 0x04 */
    u32 color;            /* 0x08 */
    u32 pad0C;
};

struct TintList {
    TintPart part[1];
};

struct TintBlock {
    u8 pad00[0x24];
    u32 colorSource[1];   /* 0x24 */
    u32 frameId;          /* 0x28 */
    u8 pad2C[4];
    u8 pad30[4];
    s32 startFrame;       /* 0x34 */
    s32 partCount;        /* 0x38 */
    u8 pad3C[0x20];
    u8 tinted;            /* 0x5C */
};

struct TintEffect {
    u8 pad00[0x20];
    f32 scale;            /* 0x20 */
    u32 tint;             /* 0x24 */
    s32 frame;            /* 0x28 */
    u8 pad2C[4];
    TintList **list;      /* 0x30 */
    TintBlock *block;     /* 0x34 */
};

extern TintScratch DAT_006472dc;

u32 FUN_0038136c(TintBlock *block, u32 *colorSource);
void matrixInitializeWithScaleAndOffset(u8 *matrix, TintEffect *effect, s32 offset, f32 scale);
void FUN_002a1fb4(u8 *transform, u8 *matrix, s32 flag);
void FUN_002b3c9c(TintObject *object, u32 frame);

/* Unpacks the four bytes of a packed colour (high byte first) into 0..1 floats. */
static void unpackColor(u32 color, f32 *out)
{
    out[0] = (f32)(color >> 24) * 0.003921569f;
    out[1] = (f32)((color & 0xFFFFFF) >> 16) * 0.003921569f;
    out[2] = (f32)((color & 0xFFFF) >> 8) * 0.003921569f;
    out[3] = (f32)(color & 0xFF) * 0.003921569f;
}

static void multiplyColor(f32 *color, const f32 *by)
{
    color[0] = color[0] * by[0];
    color[1] = color[1] * by[1];
    color[2] = color[2] * by[2];
    color[3] = color[3] * by[3];
}

static void copyColor(f32 *to, const f32 *from)
{
    to[0] = from[0];
    to[1] = from[1];
    to[2] = from[2];
    to[3] = from[3];
}

/* Tints every ready part of the effect by (block colour * effect tint * part colour), once the
 * effect frame has reached the block's start frame. */
void FUN_003b4ccc(TintEffect *effect)
{
    TintBlock *block = effect->block;
    TintList *list = *effect->list;

    if (effect->frame <= block->startFrame || block->startFrame == 0) {
        s32 partCount = block->partCount;
        u32 blockColor = FUN_0038136c(block, block->colorSource);
        f32 saved[4];
        u8 matrix[0x5C];

        unpackColor(effect->tint, DAT_006472dc.tint);
        unpackColor(blockColor, DAT_006472dc.current);
        multiplyColor(DAT_006472dc.current, DAT_006472dc.tint);
        copyColor(saved, DAT_006472dc.current);
        matrixInitializeWithScaleAndOffset(matrix, effect, 0, effect->scale);

        for (s32 n = 0; n < partCount; n++) {
            TintPart *part = &list->part[n];
            if (part->ready > 0) {
                TintObject *object = part->object;
                FUN_002a1fb4(object->transform, matrix, 0);
                unpackColor(part->color, DAT_006472dc.current);
                copyColor(DAT_006472dc.tint, saved);
                multiplyColor(DAT_006472dc.current, DAT_006472dc.tint);
                u32 a = (u32)(DAT_006472dc.current[0] * 255.0f);
                u32 r = (u32)(DAT_006472dc.current[1] * 255.0f);
                u32 g = (u32)(DAT_006472dc.current[2] * 255.0f);
                u32 b = (u32)(DAT_006472dc.current[3] * 255.0f);
                object->color = (a << 24) | ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | (b & 0xFF);
                if (block->tinted != 0) {
                    object->flags = object->flags | 0x100;
                } else {
                    object->flags = object->flags & 0xFEFF;
                }
                FUN_002b3c9c(object, block->frameId & 0xFFFF);
            }
        }
    }
}

} /* extern "C" */
