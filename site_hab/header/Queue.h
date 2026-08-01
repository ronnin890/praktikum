#include "QueueAbstract.h"

class queue : public AbstractQueue {
    queue(MemoryManager& mem) : AbstractQueue(mem) {}
    ~queue() {}
    int push(void* elem, size_t size);
    int pop();
    void* front(size_t& size);
    void* back(size_t& size);
    int insert(Iterator* iter, void* elem, size_t size);
};