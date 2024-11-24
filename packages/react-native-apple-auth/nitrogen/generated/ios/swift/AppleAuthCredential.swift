///
/// AppleAuthCredential.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `AppleAuthCredential`, backed by a C++ struct.
 */
public typealias AppleAuthCredential = margelo.nitro.appleauth.AppleAuthCredential

public extension AppleAuthCredential {
  private typealias bridge = margelo.nitro.appleauth.bridge.swift

  /**
   * Create a new instance of `AppleAuthCredential`.
   */
  init(user: String, email: String?, fullName: String?, authorizationCode: String?, identityToken: String?, state: String?) {
    self.init(std.string(user), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = email {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = fullName {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = authorizationCode {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = identityToken {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = state {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }())
  }

  var user: String {
    @inline(__always)
    get {
      return String(self.__user)
    }
    @inline(__always)
    set {
      self.__user = std.string(newValue)
    }
  }
  
  var email: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__email.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__email = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var fullName: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__fullName.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__fullName = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var authorizationCode: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__authorizationCode.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__authorizationCode = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var identityToken: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__identityToken.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__identityToken = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var state: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__state.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__state = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
}
