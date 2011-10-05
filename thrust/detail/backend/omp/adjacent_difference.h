/*
 *  Copyright 2008-2011 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>
#include <thrust/system/omp/detail/tag.h>
#include <thrust/detail/backend/generic/adjacent_difference.h>

namespace thrust
{
namespace detail
{
namespace backend
{
namespace omp
{

template<typename InputIterator, typename OutputIterator, typename BinaryFunction>
  OutputIterator adjacent_difference(tag,
                                     InputIterator first, InputIterator last,
                                     OutputIterator result,
                                     BinaryFunction binary_op)
{
  // omp prefers generic::adjacent_difference to cpp::adjacent_difference
  return thrust::detail::backend::generic::adjacent_difference(tag(), first, last, result, binary_op);
} // end adjacent_difference()

} // end omp
} // end backend
} // end detail
} // end thrust
