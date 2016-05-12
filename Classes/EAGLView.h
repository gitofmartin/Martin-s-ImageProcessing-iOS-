//
//  EAGLView.h
//  GGrayTest
//
//  Created by Johan Holland on 01/28/2016.
//  Copyright (c) 2016 com.johan.GGrayTest. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@interface EAGLView : UIView {
    
@private
    // The pixel dimensions of the backbuffer
    GLint backingWidth;
    GLint backingHeight;
    
    EAGLContext *context;
	IBOutlet UISlider *slider;
	IBOutlet UITabBar *tabBar;	
    
    // OpenGL names for the renderbuffer and framebuffer used to render to this view
    GLuint viewRenderbuffer, viewFramebuffer;	
}

@property (nonatomic, retain) UISlider *slider;
@property (nonatomic, retain) UITabBar *tabBar;

- (void)drawView;

@end
