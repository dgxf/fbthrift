/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/ExtendTestService.h>
#include <gen-py3/hsmodule/clients_wrapper.h>

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class ExtendTestServiceClientWrapper : virtual public cpp2::HsTestServiceClientWrapper {
  protected:
    std::shared_ptr<cpp2::ExtendTestServiceAsyncClient> async_client;
  public:
    explicit ExtendTestServiceClientWrapper(
      std::shared_ptr<cpp2::ExtendTestServiceAsyncClient> async_client);

    folly::Future<folly::Unit> disconnect();
    void disconnectInLoop();

    folly::Future<bool> check(
      cpp2::HsFoo arg_struct1);
};


} // namespace cpp2
