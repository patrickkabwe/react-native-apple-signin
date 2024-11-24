///
/// AppleAuth-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `AppleAuthCredential` to properly resolve imports.
namespace margelo::nitro::appleauth { struct AppleAuthCredential; }
// Forward declaration of `AppleAuthOperation` to properly resolve imports.
namespace margelo::nitro::appleauth { enum class AppleAuthOperation; }
// Forward declaration of `AppleAuthScopes` to properly resolve imports.
namespace margelo::nitro::appleauth { enum class AppleAuthScopes; }
// Forward declaration of `HybridAppleAuthSpec` to properly resolve imports.
namespace margelo::nitro::appleauth { class HybridAppleAuthSpec; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridAppleAuthSpecCxx` to properly resolve imports.
namespace AppleAuth { class HybridAppleAuthSpecCxx; }

// Include C++ defined types
#include "AppleAuthCredential.hpp"
#include "AppleAuthOperation.hpp"
#include "AppleAuthScopes.hpp"
#include "HybridAppleAuthSpec.hpp"
#include <NitroModules/Promise.hpp>
#include <exception>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::appleauth::bridge::swift {

  // pragma MARK: std::optional<std::string>
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  inline std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }
  
  // pragma MARK: std::optional<AppleAuthCredential>
  /**
   * Specialized version of `std::optional<AppleAuthCredential>`.
   */
  using std__optional_AppleAuthCredential_ = std::optional<AppleAuthCredential>;
  inline std::optional<AppleAuthCredential> create_std__optional_AppleAuthCredential_(const AppleAuthCredential& value) {
    return std::optional<AppleAuthCredential>(value);
  }
  
  // pragma MARK: std::shared_ptr<Promise<std::optional<AppleAuthCredential>>>
  /**
   * Specialized version of `std::shared_ptr<Promise<std::optional<AppleAuthCredential>>>`.
   */
  using std__shared_ptr_Promise_std__optional_AppleAuthCredential___ = std::shared_ptr<Promise<std::optional<AppleAuthCredential>>>;
  inline std::shared_ptr<Promise<std::optional<AppleAuthCredential>>> create_std__shared_ptr_Promise_std__optional_AppleAuthCredential___() {
    return Promise<std::optional<AppleAuthCredential>>::create();
  }
  
  // pragma MARK: std::function<void(const std::optional<AppleAuthCredential>& /* result */)>
  /**
   * Specialized version of `std::function<void(const std::optional<AppleAuthCredential>&)>`.
   */
  using Func_void_std__optional_AppleAuthCredential_ = std::function<void(const std::optional<AppleAuthCredential>& /* result */)>;
  /**
   * Wrapper class for a `std::function<void(const std::optional<AppleAuthCredential>& / * result * /)>`, this can be used from Swift.
   */
  class Func_void_std__optional_AppleAuthCredential__Wrapper final {
  public:
    explicit Func_void_std__optional_AppleAuthCredential__Wrapper(const std::function<void(const std::optional<AppleAuthCredential>& /* result */)>& func): _function(func) {}
    explicit Func_void_std__optional_AppleAuthCredential__Wrapper(std::function<void(const std::optional<AppleAuthCredential>& /* result */)>&& func): _function(std::move(func)) {}
    inline void call(std::optional<AppleAuthCredential> result) const {
      _function(result);
    }
  private:
    std::function<void(const std::optional<AppleAuthCredential>& /* result */)> _function;
  };
  inline Func_void_std__optional_AppleAuthCredential_ create_Func_void_std__optional_AppleAuthCredential_(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::optional<AppleAuthCredential>), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__optional_AppleAuthCredential_([sharedClosureHolder, call](const std::optional<AppleAuthCredential>& result) -> void {
      call(sharedClosureHolder.get(), result);
    });
  }
  inline std::shared_ptr<Func_void_std__optional_AppleAuthCredential__Wrapper> share_Func_void_std__optional_AppleAuthCredential_(const Func_void_std__optional_AppleAuthCredential_& value) {
    return std::make_shared<Func_void_std__optional_AppleAuthCredential__Wrapper>(value);
  }
  
  // pragma MARK: std::function<void(const std::exception& /* error */)>
  /**
   * Specialized version of `std::function<void(const std::exception&)>`.
   */
  using Func_void_std__exception = std::function<void(const std::exception& /* error */)>;
  /**
   * Wrapper class for a `std::function<void(const std::exception& / * error * /)>`, this can be used from Swift.
   */
  class Func_void_std__exception_Wrapper final {
  public:
    explicit Func_void_std__exception_Wrapper(const std::function<void(const std::exception& /* error */)>& func): _function(func) {}
    explicit Func_void_std__exception_Wrapper(std::function<void(const std::exception& /* error */)>&& func): _function(std::move(func)) {}
    inline void call(std::exception error) const {
      _function(error);
    }
  private:
    std::function<void(const std::exception& /* error */)> _function;
  };
  inline Func_void_std__exception create_Func_void_std__exception(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::exception), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__exception([sharedClosureHolder, call](const std::exception& error) -> void {
      call(sharedClosureHolder.get(), error);
    });
  }
  inline std::shared_ptr<Func_void_std__exception_Wrapper> share_Func_void_std__exception(const Func_void_std__exception& value) {
    return std::make_shared<Func_void_std__exception_Wrapper>(value);
  }
  
  // pragma MARK: std::optional<AppleAuthOperation>
  /**
   * Specialized version of `std::optional<AppleAuthOperation>`.
   */
  using std__optional_AppleAuthOperation_ = std::optional<AppleAuthOperation>;
  inline std::optional<AppleAuthOperation> create_std__optional_AppleAuthOperation_(const AppleAuthOperation& value) {
    return std::optional<AppleAuthOperation>(value);
  }
  
  // pragma MARK: std::vector<AppleAuthScopes>
  /**
   * Specialized version of `std::vector<AppleAuthScopes>`.
   */
  using std__vector_AppleAuthScopes_ = std::vector<AppleAuthScopes>;
  inline std::vector<AppleAuthScopes> create_std__vector_AppleAuthScopes_(size_t size) {
    std::vector<AppleAuthScopes> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::appleauth::HybridAppleAuthSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::appleauth::HybridAppleAuthSpec>`.
   */
  using std__shared_ptr_margelo__nitro__appleauth__HybridAppleAuthSpec_ = std::shared_ptr<margelo::nitro::appleauth::HybridAppleAuthSpec>;
  std::shared_ptr<margelo::nitro::appleauth::HybridAppleAuthSpec> create_std__shared_ptr_margelo__nitro__appleauth__HybridAppleAuthSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__appleauth__HybridAppleAuthSpec_(std__shared_ptr_margelo__nitro__appleauth__HybridAppleAuthSpec_ cppType);

} // namespace margelo::nitro::appleauth::bridge::swift
