#ifndef CPYCPPYY_CPPCONSTRUCTOR_H
#define CPYCPPYY_CPPCONSTRUCTOR_H

// Bindings
#include "CPPMethod.h"


namespace CPyCppyy {

class CPPConstructor : public CPPMethod {
public:
    using CPPMethod::CPPMethod;

public:
    virtual PyObject* GetDocString();
    virtual PyCallable* Clone() { return new CPPConstructor(*this); }

public:
    virtual PyObject* Call(
        CPPInstance*& self, PyObject* args, PyObject* kwds, TCallContext* ctxt = nullptr);

protected:
    virtual bool InitExecutor_(TExecutor*&, TCallContext* ctxt = nullptr);
};

} // namespace CPyCppyy

#endif // !CPYCPPYY_CPPCONSTRUCTOR_H
