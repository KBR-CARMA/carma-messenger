#!/bin/bash

#  Copyright (C) 2018-2021 LEIDOS.
# 
#  Licensed under the Apache License, Version 2.0 (the "License"); you may not
#  use this file except in compliance with the License. You may obtain a copy of
#  the License at
# 
#  http://www.apache.org/licenses/LICENSE-2.0
# 
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
#  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
#  License for the specific language governing permissions and limitations under
#  the License.

# CARMA packages checkout script
# Optional argument to set the root checkout directory with no ending '/' default is '~'

set -exo pipefail

dir=~
while [[ $# -gt 0 ]]; do
      arg="$1"
      case $arg in
            -d|--develop)
                  BRANCH=develop
                  shift
            ;;
            -r|--root)
                  dir=$2
                  shift
                  shift
            ;;
      esac
done

if [[ "$BRANCH" = "develop" ]]; then
      git clone https://github.com/usdot-fhwa-stol/carma-msgs.git ~/src/CARMAMsgs --branch $BRANCH
      git clone https://github.com/usdot-fhwa-stol/carma-utils.git ~/src/CARMAUtils --branch $BRANCH
else
      git clone https://github.com/usdot-fhwa-stol/carma-msgs.git ${dir}/src/CARMAMsgs --branch carma-system-4.2.0
      git clone https://github.com/usdot-fhwa-stol/carma-utils.git ${dir}/src/CARMAUtils --branch carma-system-4.2.0
fi
