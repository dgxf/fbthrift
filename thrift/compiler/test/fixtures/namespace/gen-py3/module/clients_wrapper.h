/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/TestService.h>

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

class TestServiceClientWrapper {
  protected:
    std::shared_ptr<cpp2::TestServiceAsyncClient> async_client;
  public:
    explicit TestServiceClientWrapper(
      std::shared_ptr<cpp2::TestServiceAsyncClient> async_client);
    virtual ~TestServiceClientWrapper();

    folly::Future<folly::Unit> disconnect();
    void disconnectInLoop();

    folly::Future<int64_t> init(
      int64_t arg_int1);
};


} // namespace cpp2
