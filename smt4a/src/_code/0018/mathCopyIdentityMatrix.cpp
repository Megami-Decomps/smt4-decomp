#include "shard/W5_W5Match2_PlainData.h"
extern "C" {
extern u32 _ZGVZN2nw4math5MTX448IdentityEvE8identity;
extern Matrix44 _ZZN2nw4math5MTX448IdentityEvE8identity;
s32 __cxa_guard_acquire(u32*);
__weak void __cxa_guard_release(u32*);
void mtx44Copy(Matrix44*, const Matrix44*);

Matrix44* mathCopyIdentityMatrix(Matrix44* destination)
{
    if ((_ZGVZN2nw4math5MTX448IdentityEvE8identity & 1) == 0 && __cxa_guard_acquire(&_ZGVZN2nw4math5MTX448IdentityEvE8identity) != 0) {
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[0] = 1.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[1] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[2] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[3] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[4] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[5] = 1.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[6] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[7] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[8] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[9] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[10] = 1.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[11] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[12] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[13] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[14] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[15] = 1.0f;
        __cxa_guard_release(&_ZGVZN2nw4math5MTX448IdentityEvE8identity);
    }
    mtx44Copy(destination, &_ZZN2nw4math5MTX448IdentityEvE8identity);
    return destination;
}
}
