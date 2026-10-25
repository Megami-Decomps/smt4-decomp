#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

/* Returns the bits per pixel of a PICA texture format and component type, or 0 for an unsupported pair. */
u32 gfxTexFormatGetBitsPerPixel(u32 format, u32 type)
{
    if (format == 0x6752) { /* GL_RGBA */
        if (type == 0x1401) { /* GL_UNSIGNED_BYTE */
            return 32;
        }
        if (type == 0x8033 || type == 0x8034) { /* GL_UNSIGNED_SHORT_4_4_4_4, GL_UNSIGNED_SHORT_5_5_5_1 */
            return 16;
        }
    } else if (format == 0x6754) { /* GL_RGB */
        if (type == 0x1401) {
            return 24;
        }
        if (type == 0x8363) { /* GL_UNSIGNED_SHORT_5_6_5 */
            return 16;
        }
    } else if (format == 0x6758) { /* GL_LUMINANCE_ALPHA */
        if (type == 0x1401) {
            return 16;
        }
        if (type == 0x6760) { /* GL_UNSIGNED_BYTE_4_4_DMP */
            return 8;
        }
    } else if (format == 0x6756) { /* GL_ALPHA */
        if (type == 0x1401) {
            return 8;
        }
        if (type == 0x6761) { /* GL_UNSIGNED_4BITS_DMP */
            return 4;
        }
    }
    return 0;
}

} /* extern "C" */
