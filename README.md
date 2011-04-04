TableViewCell Flexible Content Size
===================================

TFCS is a custom TableViewCell class, use performance of UITextView as flexible size depends on content. TFCS is derived from the
[Blognone app], which is one of the best technical news website in Thailand.

[![](http://farm6.static.flickr.com/5141/5588342334_0ef1101486_m.jpg)](http://farm6.static.flickr.com/5141/5588342334_0ef1101486_m.jpg)
[![](http://farm6.static.flickr.com/5092/5588344800_91b84f0bd6_m.jpg)](http://farm6.static.flickr.com/5092/5588344800_91b84f0bd6_m.jpg)

Adding TFCS to your project
===========================

It's very simple.
**Estimated time:** 5 minutes.

1. Clone the TFCS git repository: `git clone git://github.com/totiz/TableViewCell-Flexible-Content-Size.git`
or download via `https://github.com/totiz/TableViewCell-Flexible-Content-Size`.

2. Locate the "FlexibleContentSizeCell.[h/m]" files under "`TableViewCell-Flexible-Content-Size/`". 
Drag FlexibleContentSizeCell.h and FlexibleContentSizeCell.m and drop it onto the root of your Xcode 
project's "Groups and Files"  sidebar.  A dialog will appear -- make sure "Copy items" is unchecked and 
"Reference Type" is "Relative to Project" before clicking "Add".    

3. You're ready to go.  Just #import "FlexibleContentSizeCell.h" anywhere you want to use TFCS class
in your project( Normally UITableViewController).

4. Have a look at these methods in `RootViewController.m` for more understanding
   - (void)viewDidLoad
   - (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
   - (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {

5. Have fun!

An Overview of FlexibleContentSizeCell.
======================

textView
------------

replaced .textLabel.text in UITableViewCell.

contentText
----------------

for get/set text in textView.

contentTextHeight
-----------------------

Calculate the size of the content, used by UITableViewDatasource.

