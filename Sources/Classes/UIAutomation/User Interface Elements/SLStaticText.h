//
//  SLStaticText.h
//  Subliminal
//
//  For details and documentation:
//  http://github.com/inkling/Subliminal
//
//  Copyright 2013-2014 Inkling Systems, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "SLElement.h"

/**
 `SLStaticText` matches any element that emits UIAccessibilityTraitStaticText, such as 
 a UILabel or a text element within a UIWebView.
 
 FYI - UILabels automatically inherit their accessibility label from their text value. 
 Therefore, you can use the accessibilityIdentifier property if you want to match a 
 label, but don't know what its text will be at runtime.
 */
@interface SLStaticText : SLElement

@end
