# MCCatchRedPacket
低仿uc捉红包功能

### 运行效果

![](https://github.com/KeenTeam1990/MITO/blob/master/PIC/IMG_2585.PNG)

![](https://github.com/KeenTeam1990/MITO/blob/master/PIC/IMG_2586.PNG)

### 点赞效果
![](https://github.com/KeenTeam1990/MITO/blob/master/PIC/IMG_2589.PNG)

### 随听模块效果
![](https://github.com/KeenTeam1990/MITO/blob/master/PIC/IMG_2590.PNG)

### 下拉刷新控件效果
![](https://github.com/KeenTeam1990/MITO/blob/master/PIC/IMG_2591.PNG)

pod 'RESideMenu', '~> 4.0.7'

pod 'DACircularProgress'

pod 'FLAnimatedImage'

pod 'Masonry'

pod 'pop'

pod 'Ono'

end
...


```objc
@interface TGEssenceNewVC ()
@property (nonatomic, weak) TGSementBarVC *segmentBarVC;
@end

@implementation TGEssenceNewVC

-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleLightContent;//UIStatusBarStyleDefault;
}

- (TGSementBarVC *)segmentBarVC {
    if (!_segmentBarVC) {
        TGSementBarVC *vc = [[TGSementBarVC alloc] init];
        [self addChildViewController:vc];
        _segmentBarVC = vc;
    }
    return _segmentBarVC;
}

### 如果您喜欢本项目,请Star

如果有不懂的地方可以加入QQ交流群讨论：<a target="_blank" href="//shang.qq.com/wpa/qunwpa?idkey=c9dc4ab0b2062e0004b3b2ed556da1ce898631742e15780297feb3465ad08eda">**812144991**</a>。这个QQ群讨论技术范围包括：iOS、H5混合开发、前端开发、PHP开发，欢迎大家讨论技术。

