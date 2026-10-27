/* NON_MATCHING: header id/magic/version are stored with post-incremented str instead of one stm, and the second format table pointer is folded into an immediate offset; see smt4 twin. */
#include "common.h"

/* Allocator interface: slot 2 allocates `size` bytes with the given alignment. */
class TexAllocator {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void *alloc(u32 size, u32 alignment);
};

struct TexDimensions {
    s32 width;
    s32 height;
    s32 mipCount;
};

/* What to build: dimensions, mip count and pixel format. */
struct TexBuildConfig {
    /* 0x00 */ TexDimensions size;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 format;
    /* 0x18 */ u8 clearData;
    /* 0x19 */ u8 hasData;
};

/* GL description of each texture format. */
struct TexFormatTable {
    u32 internalFormat[14];
    u32 dataType[14];
};

/* The 0x3C-byte file header: a magic, the format description and a self-relative pointer to the body. */
struct TexFileHeader {
    u32 id;
    u32 magic;
    u32 version;
    u32 unk0C;
    u32 unk10;
    u32 unk14;
    u32 width;
    u32 height;
    u32 internalFormat;
    u32 dataType;
    u32 mipLevels;
    u32 unk2C;
    u32 unk30;
    u32 format;
    s32 bodyOffset;

    TexFileHeader()
        : id(0), magic(0), version(0), unk0C(0), unk10(0), unk14(0), width(0), height(0), internalFormat(0),
          dataType(0), mipLevels(0), unk2C(0), unk30(0), format(0), bodyOffset(0)
    {
    }
    static void *operator new(u32 size, TexAllocator *allocator) throw() { return allocator->alloc(size, 4); }
};

/* The 0x20-byte body: sizes and a self-relative pointer to the pixel data. */
struct TexFileBody {
    u32 width;
    u32 height;
    u32 dataSize;
    s32 dataOffset;
    TexAllocator *allocator;
    u32 bitsPerTexel;
    u32 unk18;
    u32 unk1C;

    TexFileBody() : width(0), height(0), dataSize(0), dataOffset(0), allocator(0), bitsPerTexel(0), unk18(0), unk1C(0) {}
    static void *operator new(u32 size, TexAllocator *allocator) throw() { return allocator->alloc(size, 4); }
};

/* Stores the distance from `slot` to `target`, or 0 for no target. */
static __inline void setRelativePointer(s32 *slot, const void *target)
{
    *slot = target != NULL ? (s32)((const u8 *)target - (const u8 *)slot) : 0;
}

static __inline void byteFill(u8 *dst, s32 value, u32 count)
{
    for (; count != 0; count--) {
        *dst++ = (u8)value;
    }
}

extern "C" {
extern TexFormatTable DAT_0053cc20;
extern f32 DAT_0053cc90[14];

/* Builds the texture file image for `config` in memory from `allocator`: header, body and pixel storage. */
TexFileHeader *FUN_00450f58(const TexBuildConfig *config, TexAllocator *allocator)
{
    s32 minSize = config->format == 12 ? 16 : 8;
    TexFileHeader *header = new (allocator) TexFileHeader;
    header->id = 0x20000011;
    header->magic = 0x4D495854;
    header->version = 0x5000000;
    header->unk0C = 0;
    header->unk10 = 0;
    header->unk14 = 0;
    header->width = config->size.width;
    header->height = config->size.height;
    const TexFormatTable *formats = &DAT_0053cc20;
    header->internalFormat = formats->internalFormat[config->format];
    header->dataType = formats->dataType[config->format];
    header->mipLevels = config->size.mipCount;
    header->unk2C = 0;
    header->unk30 = config->unk0C;
    header->format = config->format;

    TexFileBody *body = new (allocator) TexFileBody;
    body->allocator = allocator;
    body->width = config->size.width;
    body->height = config->size.height;
    body->unk18 = config->unk10;
    f32 bytesPerTexel = DAT_0053cc90[config->format];
    body->bitsPerTexel = (u32)(bytesPerTexel * 8.0f);

    u32 total = 0;
    TexDimensions size = config->size;
    s32 width = size.width;
    s32 height = size.height;
    for (s32 mip = size.mipCount; mip > 0; mip--) {
        total += (u32)(bytesPerTexel * (f32)width * (f32)height);
        if (width == minSize && height == minSize) {
            header->mipLevels = size.mipCount - mip + 1;
            break;
        }
        if (width > minSize) {
            width /= 2;
        }
        if (height > minSize) {
            height /= 2;
        }
    }

    if (config->hasData == 0) {
        body->dataSize = 0;
        setRelativePointer(&body->dataOffset, NULL);
    } else {
        u8 *data = (u8 *)allocator->alloc(total, 128);
        if (config->clearData != 0) {
            byteFill(data, 0, total);
        }
        body->dataSize = total;
        setRelativePointer(&body->dataOffset, data);
    }
    setRelativePointer(&header->bodyOffset, body);
    return header;
}

}
