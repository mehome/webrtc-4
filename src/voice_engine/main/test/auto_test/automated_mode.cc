/*
 *  Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */
#include "gtest/gtest.h"

int RunInAutomatedMode(int argc, char** argv) {
  // Initialize the testing framework.
  testing::InitGoogleTest(&argc, argv);

  // Run tests.
  return RUN_ALL_TESTS();
}