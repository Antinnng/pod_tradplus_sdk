Pod::Spec.new do |spec|
  spec.name         = "TradPlusAdSDK"
  spec.version      = "8.9.0"
  spec.summary      = "TradPlusAd SDK"
  spec.description  = <<-DESC
            "A short description of TradPlusAd SDK for iOS.
                   DESC
  spec.homepage     = "https://github.com/tradplus/pod_tradplus_sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "tradplus" => "service@tradplus.com" }
  spec.source       = { :git => "https://github.com/tradplus/pod_tradplus_sdk.git", :tag => spec.version }
  spec.platform     = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'
  
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  valid_archs = ['x86_64','armv7','arm64']
  spec.default_subspecs = 'TradPlusAds'

  spec.subspec 'TradPlusAds' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TradPlusAds.framework'
     ss.resources = ['TradPlusAdSDK/TradPlusAds.bundle','TradPlusAdSDK/TradPlusADX.bundle']
  end

  spec.subspec 'AdMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAdMobAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPFacebookAdapter.framework'
  end
   
  spec.subspec 'AdColonyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAdColonyAdapter.framework'
  end
   
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAppLovinAdapter.framework'
  end
   
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPGDTMobAdapter.framework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPIronSourceAdapter.framework'
  end
   
  spec.subspec 'KuaiShouAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPKuaiShouAdapter.framework'
  end
   
  spec.subspec 'PangleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPPangleAdapter.framework'
  end
   
  spec.subspec 'SigmobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPSigmobAdapter.framework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPTapjoyAdapter.framework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPUnityAdapter.framework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPVungleAdapter.framework'
  end
   
  spec.subspec 'YouDaoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPYouDaoAdapter.framework'
  end   
   
  spec.subspec 'InMobiAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPInMobiAdapter.framework'
  end   
      
  spec.subspec 'MintegralAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPMintegralAdapter.framework'
  end   
   
  spec.subspec 'SmaatoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPSmaatoAdapter.framework'
  end   
   
  spec.subspec 'MaioAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPMaioAdapter.framework'
  end   
   
  spec.subspec 'MyTargetAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPMyTargetAdapter.framework'
  end   
   
  spec.subspec 'KidozAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPKidozAdapter.framework'
  end   
   
  spec.subspec 'KlevinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPKlevinAdapter.framework'
  end   
   
  spec.subspec 'StartAppAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPStartAppAdapter.framework'
  end

  spec.subspec 'TPCrossAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPCrossAdapter.framework'
  end

  spec.subspec 'ChartboostAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPChartboostAdapter.framework'
  end

  spec.subspec 'FyberAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPFyberAdapter.framework'
  end

  spec.subspec 'SuperAwesomeAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPSuperAwesomeAdapter.framework'
  end

  spec.subspec 'BaiduAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPBaiduAdapter.framework'
  end

  spec.subspec 'OguryAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPOguryAdapter.framework'
  end
  
  spec.subspec 'VerveAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPVerveAdapter.framework'
  end

  spec.subspec 'YandexAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPYandexAdapter.framework'
  end

  spec.subspec 'HeliumAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPHeliumAdapter.framework'
  end

  spec.subspec 'BigoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPBigoAdapter.framework'
  end

  spec.subspec 'CSJAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPCSJAdapter.framework'
  end

  spec.subspec 'BeiziAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPBeiziAdapter.framework'
  end
end
