// Copyright (C) 2018-2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <memory>

#include "openvino/pass/matcher_pass.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {

class TRANSFORMATIONS_API ConvertOpSet3ToOpSet2;

}  // namespace pass
}  // namespace ov

class ov::pass::ConvertOpSet3ToOpSet2 : public ov::pass::ModelPass {
public:
    OPENVINO_MODEL_PASS_RTTI("ConvertOpSet3ToOpSet2");
    bool run_on_model(const std::shared_ptr<ov::Model>& m) override;
};
