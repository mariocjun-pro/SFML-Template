#pragma once

#include "stdafx.h"
#include "Estado.h"

using namespace Estados;

namespace Estados {
    class MenuEstado : public Estado {
    public:
        MenuEstado();

        ~MenuEstado() override;
    };
}
