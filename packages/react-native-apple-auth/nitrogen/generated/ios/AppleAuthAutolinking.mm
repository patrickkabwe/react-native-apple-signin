///
/// AppleAuthAutolinking.mm
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#import <Foundation/Foundation.h>
#import <NitroModules/HybridObjectRegistry.hpp>
#import "AppleAuth-Swift-Cxx-Umbrella.hpp"
#import <type_traits>

#include "HybridAppleAuthSpecSwift.hpp"

@interface AppleAuthAutolinking : NSObject
@end

@implementation AppleAuthAutolinking

+ (void) load {
  using namespace margelo::nitro;
  using namespace margelo::nitro::appleauth;

  HybridObjectRegistry::registerHybridObjectConstructor(
    "AppleAuth",
    []() -> std::shared_ptr<HybridObject> {
      std::shared_ptr<margelo::nitro::appleauth::HybridAppleAuthSpec> hybridObject = AppleAuth::AppleAuthAutolinking::createAppleAuth();
      return hybridObject;
    }
  );
}

@end