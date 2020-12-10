#
# Be sure to run `pod lib lint OCRToolSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OCRToolSDK'
  s.version          = '1.0.0'
  s.summary          = '身份证识别工具 --OCRToolSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  1.以静态库Framework的形式提供
                       DESC

  s.homepage         = 'https://github.com/cxx3344/OCRToolSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'cxx3344' => '2893358240@qq.com' }
  s.source           = { :git => 'https://github.com/cxx3344/OCRToolSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.resources = "OCRToolSDK/Resources/*.png"

  s.ios.vendored_frameworks = 'OCRToolSDK/OCRToolSDK.framework'
  
  # s.resource_bundles = {
  #   'OCRToolSDK' => ['OCRToolSDK/Assets/*.png']
  # }
  s.frameworks = "Foundation", "UIKit", "AVFoundation"
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'

  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

  s.requires_arc = true


end
