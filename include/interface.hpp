// - interface.hpp
#ifndef INTERFACE_HPP
#define INTERFACE_HPP

class Interface
{
public:
    virtual void showData() const = 0;
    virtual ~Interface() = default;
};

#endif