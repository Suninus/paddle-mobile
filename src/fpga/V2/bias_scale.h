/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

namespace paddle_mobile {
namespace fpga {
namespace bias_scale {

void align_element(float **data_in, int num, int num_after_alignment);
void format_bias_scale_array(float **data_in, int num, int num_after_alignment);

}  // namespace bias_scale
}  // namespace fpga
}  // namespace paddle_mobile
