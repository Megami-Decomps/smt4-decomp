/* NON_MATCHING: register allocation and constant-load order (retail keeps 0 in r0 and loads the magic after the field stores) */
/* nw::snd::internal::BankFileReader: validates a bank file (magic 'CBNK', version 1.0.x) and locates its info block. */
#include "common.h"

extern "C" const void *nw_snd_internal_BankFile_FileHeader_GetInfoBlock(const void *header);

namespace nw {
namespace snd {
namespace internal {

struct BankFileHeader {
    /* 0x00 */ u32 signature;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 version;
};

class BankFileReader {
public:
    BankFileReader(const void *bankFile);

private:
    /* 0x00 */ const BankFileHeader *m_header;
    /* 0x04 */ const void *m_infoBlockBody;
    /* 0x08 */ bool m_initialized;
};

BankFileReader::BankFileReader(const void *bankFile)
    : m_header(NULL), m_infoBlockBody(NULL), m_initialized(false)
{
    const BankFileHeader *header = static_cast<const BankFileHeader *>(bankFile);

    if (header != NULL && header->signature == 0x4B4E4243 && header->version - 0x1000000U <= 0x100) {
        m_header = header;
        m_infoBlockBody = static_cast<const u8 *>(nw_snd_internal_BankFile_FileHeader_GetInfoBlock(header)) + 8;
        m_initialized = true;
    }
}

} // namespace internal
} // namespace snd
} // namespace nw
