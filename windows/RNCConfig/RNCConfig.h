#pragma once

#include "pch.h"

#include <functional>

#include "NativeModules.h"

namespace RNCConfig
{
  REACT_MODULE(ReactNativeConfigModule);
  struct ReactNativeConfigModule
  {
    REACT_CONSTANT(API_URL);
    const std::string API_URL = "Api Key!";
  };
}

