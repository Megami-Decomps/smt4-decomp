/* A scope guard over an nn::os::CriticalSection: enters it on construction, leaves it on destruction. */
#ifndef NN_OS_CRITICALSECTIONLOCK_H
#define NN_OS_CRITICALSECTIONLOCK_H

#include "common.h"

extern "C" void nn_os_CriticalSection_Enter(void *section);
extern "C" void nn_os_CriticalSection_Leave(void *section);

class CriticalSectionLock {
public:
    explicit CriticalSectionLock(void *section) : m_section(section) { nn_os_CriticalSection_Enter(m_section); }
    ~CriticalSectionLock() { nn_os_CriticalSection_Leave(m_section); }

private:
    void *m_section;
};

#endif
