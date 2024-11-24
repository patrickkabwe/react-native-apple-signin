///
/// HybridAppleAuthSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `AppleAuthCredential` to properly resolve imports.
namespace margelo::nitro::appleauth { struct AppleAuthCredential; }
// Forward declaration of `AppleAuthOptions` to properly resolve imports.
namespace margelo::nitro::appleauth { struct AppleAuthOptions; }

#include <NitroModules/Promise.hpp>
#include <optional>
#include "AppleAuthCredential.hpp"
#include "AppleAuthOptions.hpp"

namespace margelo::nitro::appleauth {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `AppleAuth`
   * Inherit this class to create instances of `HybridAppleAuthSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridAppleAuth: public HybridAppleAuthSpec {
   * public:
   *   HybridAppleAuth(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridAppleAuthSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridAppleAuthSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridAppleAuthSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual std::shared_ptr<Promise<std::optional<AppleAuthCredential>>> signIn(const AppleAuthOptions& options) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "AppleAuth";
  };

} // namespace margelo::nitro::appleauth
