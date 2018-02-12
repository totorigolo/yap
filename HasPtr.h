#pragma once

#include <memory>

template<typename C>
class HasPtr {
public:
    using Ptr = std::shared_ptr<C>;
};
