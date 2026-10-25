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
    /* Named lock object: the section is loaded once and kept for both Enter and Leave. */
    explicit ScopedCriticalLock(CriticalSection& lock) : section(&lock)
    {
        nn_os_CriticalSection_Enter(section);
    }
    /* Lock passed by address (e.g. a member of a list): the address argument is built first, then kept. */
    explicit ScopedCriticalLock(CriticalSection* lock) : section(lock)
    {
        nn_os_CriticalSection_Enter(lock);
    }
    /* Lock held as raw storage (a byte array or a word-typed global that is an nn::os::CriticalSection). */
    explicit ScopedCriticalLock(void* lock) : section(static_cast<CriticalSection*>(lock))
    {
        nn_os_CriticalSection_Enter(section);
    }
    ~ScopedCriticalLock()
    {
        nn_os_CriticalSection_Leave(section);
    }
};

#endif
