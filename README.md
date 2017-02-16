# UIImageView-GIF
一个imageview播放gif的分类####

##附带一个gif的网站
http://preloaders.net/en/circular
###用法:
// 获取图片地址
    NSString *file = [[NSBundle mainBundle] pathForResource:@"40" ofType:@"gif"];
    UIImageView *imageV = [UIImageView imageViewWithGIFFile:file frame:CGRectMake(100, 100, 50, 50)];
    [self.view addSubview:imageV];
    
    ###其实就是像mac预览gif一样,把gif分成图片组
