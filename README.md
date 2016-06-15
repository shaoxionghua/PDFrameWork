# PDFrameWork
工具类和控件类集合的动态库

#PDFramework使用（持续更新中）
导入通用库 工程设置  TARGETS-->Embedded Binaries  点击下面加号 新增PDFramework.framework
使用的时候 只需要导入 #import <PDFramework/Header.h>

#1.PDObject
	使用方法：例如设置颜色->self.view.backgroundColor = [[PDObject getInstance] colorWithHexString:@"ff6600"];
	其他使用方法参照文件里面的方法自己研究下吧！
	注意事项：暂无

#2.PDWidget
	使用方法：
	1）.新建带图片的按钮
	UIButton *btn = [self CreatImageButton:CGRectMake(100, 100, 0, 0) :[UIImage imageNamed:@"ApplePayBTN_36pt__black_logo_.png"] :@"苹果支付"];
	[btn addTarget:self action:@selector(test:) forControlEvents:UIControlEventTouchUpInside];
	[self.view addSubview:btn];
	2）.新建带阴影的view
	UIView *view1 = [PDWidget CreatShadwView:CGRectMake(20, 120, 40, 40)];
	[self.view addSubview:view1];
	3）.新建UILabel，内容靠下显示（上：VerticalAlignmentTop 中：VerticalAlignmentMiddle 下：VerticalAlignmentBottom）
	MYLab *lab = [self CreatMyLab:CGRectMake(0, 250, 150, 30) :VerticalAlignmentBottom];
	lab.text = @"控件";
	lab.backgroundColor = [UIColor redColor];
	[self.view addSubview:lab];
	注意事项：暂无

#3.PDToast
	使用方法：
	1）.普通显示
	[PDToast showWithText:@"您好!"];
	2）.带菊花显示
	[PDToast showActivity:@"正在加载数据"];
	其他使用方法参照.h文件里面的方法自己研究下吧！
	注意事项：暂无

#4.PDShowStars
	使用方法：
	PDShowStars *sView = [[PDShowStars alloc]initWithFrameForCenter:CGRectMake(150, 400, 100, 20) numOfFloat:5.00 :[UIColor blackColor]];
	[self.view addSubview:sView];
	注意事项：需要在自己的工程目录下导入fontello文件夹  在工程的info.plist文件中新增Fonts Provided by application，TYPE为Array,并新增一项Value为Fontello.ttf
	
	
#防止按钮重复点击的方法
	UIButton * button = [UIButton buttonWithType:UIButtonTypeSystem];
	button.frame = CGRectMake(50, 100, 100, 50);
	button.backgroundColor = [UIColor redColor];
	[button setTitle:@"连续点击" forState:UIControlStateNormal];
	[button addTarget:self action:@selector(buttonAction) forControlEvents:UIControlEventTouchUpInside];
	[self.view addSubview:button];
	button.timeInterVal = 3;
	-(void)buttonActio{
		 _clickNum += 1;
		NSLog(@"点击了%ld下",(long)_clickNum)
	}
    

