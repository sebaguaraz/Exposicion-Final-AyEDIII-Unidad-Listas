// - interface.hpp
#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
public:
    virtual void showData() const = 0;
    virtual ~Interface() = default;
};

#endif