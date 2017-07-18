Pod::Spec.new do |s|

  s.name         = "ZCWDropDownMenu"
  s.version      = "0.0.3"
  s.summary      = "Drop-down Menu"

  s.description  = 'Drop-down Menu 下拉菜单'

  s.homepage     = "https://github.com/zcwlwen/ZCWDropDownMenu"

  s.license      = "MIT"
  
  s.author             = { "张朝伟" => "zcw_lwen@sina.cn" }

  s.platform     = :ios
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/zcwlwen/ZCWDropDownMenu.git", :tag => "0.0.3" }

  s.source_files  = "ZCWDropDownMenu/ZCWDropDownMenu/*"

  s.requires_arc = true
