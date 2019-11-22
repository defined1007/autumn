#pragma once

#include <memory>
#include <map>

#include "object.h"

namespace autumn {
namespace builtin {

extern std::map<std::string, object::BuiltinFunction> BUILTINS;

std::shared_ptr<object::Object> len(const std::vector<std::shared_ptr<object::Object>>& args);

} // namespace builtin
} // namespace autumn