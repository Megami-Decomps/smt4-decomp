/* NON_MATCHING: retail loads the magic constant before comparing and keeps the header pointer in r1 across the info block call; armcc moves it to r0 */
/* nw::snd::internal::WaveSoundFileReader: validates a wave sound file (magic 'CWSD', version 1.0.0) and locates its info
 * block body. */
#include "common.h"

extern "C" const void *nw_snd_internal_WaveSoundFile_FileHeader_GetInfoBlock(const void *header);

namespace nw {
namespace snd {
namespace internal {

struct WaveSoundFileHeader {
    /* 0x00 */ u32 signature;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 version;
};

class WaveSoundFileReader {
public:
    WaveSoundFileReader(const void *waveSoundFile);

private:
    /* 0x00 */ const WaveSoundFileHeader *m_header;
    /* 0x04 */ const void *m_infoBlockBody;
};

WaveSoundFileReader::WaveSoundFileReader(const void *waveSoundFile)
    : m_header(NULL), m_infoBlockBody(NULL)
{
    const WaveSoundFileHeader *header = static_cast<const WaveSoundFileHeader *>(waveSoundFile);

    if (header->signature == 0x44535743 && header->version == 0x1000000) {
        m_header = header;

        const u8 *infoBlock = static_cast<const u8 *>(nw_snd_internal_WaveSoundFile_FileHeader_GetInfoBlock(header));
        if (infoBlock != NULL) {
            m_infoBlockBody = infoBlock + 8;
        }
    }
}

} // namespace internal
} // namespace snd
} // namespace nw
