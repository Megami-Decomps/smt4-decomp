#ifndef SHARD_W6_W6MATCH1_CRITICALSECTION_H
#define SHARD_W6_W6MATCH1_CRITICALSECTION_H

struct CriticalSection;

extern "C" {
void nn_os_CriticalSection_Enter(CriticalSection* section);
void nn_os_CriticalSection_Leave(CriticalSection* section);
}

class ScopedCriticalLock {
    CriticalSection* section;
    ScopedCriticalLock(const ScopedCriticalLock&);
    ScopedCriticalLock& operator=(const ScopedCriticalLock&);
public:
    explicit ScopedCriticalLock(CriticalSection& section) : section(&section)
    {
        nn_os_CriticalSection_Enter(&section);
    }
    ~ScopedCriticalLock()
    {
        nn_os_CriticalSection_Leave(section);
    }
};

#endif
