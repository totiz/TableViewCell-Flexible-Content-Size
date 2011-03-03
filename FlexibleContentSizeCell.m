//
//  FlexibleContentSizeCell.m
//  TableViewCellFlexibleContentSize
//
//  Created by Nattapon on 2/28/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "FlexibleContentSizeCell.h"


@implementation FlexibleContentSizeCell

@synthesize textView;
@synthesize contentText;
@synthesize contentTextHeight;


- (void)setContentText:(NSString *)newText
{
	self.textView.text = newText;
	
	// Setup TextView Frame Height equal to Content Size
	CGRect textViewFrame = self.textView.frame;
	textViewFrame.size.height = self.textView.contentSize.height;
	self.textView.frame = textViewFrame;
}

- (NSString *)contentText
{
	return self.textView.text;
}

- (CGFloat)contentTextHeight
{
	return self.textView.contentSize.height;
}



- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code.
    }
    return self;
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state.
}


- (void)dealloc {
    [super dealloc];
}

@end
