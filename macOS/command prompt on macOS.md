# command prompt on macOS

## ****Open Terminal****

### first:

- Click the Launchpad icon  in the Dock, type Terminal in the search field, then click Terminal.
- In the Finder , open the /Applications/Utilities folder, then double-click Terminal.

### second:

- Go to the Dock and click on the silver rocket icon.

![https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/mac-1.png?resize=768%2C121&ssl=1](https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/mac-1.png?resize=768%2C121&ssl=1)

- Select the “Other” folder.

![https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/mac-3.png?resize=768%2C432&ssl=1](https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/mac-3.png?resize=768%2C432&ssl=1)

- Choose “Terminal” to launch the command prompt.

![https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/mac-4.png?resize=768%2C432&ssl=1](https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/mac-4.png?resize=768%2C432&ssl=1)

## ****Terminal Commands****

### ****Change Directory****

Command: “`cd`“

The “`cd`” command will change the Terminal directory you’re working in. This allows you to open a file, execute a command, and view the contents of a different directory.

### ****Listing Directory****

Command: `Is`

The “`Is`” command can be used while viewing the files and directories of the current directory. Use the “IS -I” command to find more file information, including the creation date, permissions, and owner.

### ****Open Files****

Command: `open`

The “`open`” command will open a file. By entering this command, a space, then the filename you want to access, you will launch the file using the appropriate application, like “Word,” for example.

### ****Create a Text File****

Command: `touch`

The “`touch`” command creates a blank file of any file type. Once your empty file is created, you can launch it in the text editor using the “open” command.

### ****Move a File****

Command: `mv`

The “`mv`” command is for when you want to move a file instead of making a copy of it. It will move the specified file from its original location to the new location.

### ****Copy Folder Contents to a New Folder****

Command: `ditto`

Just like the English meaning of “`ditto`,” this command can be used to do the same thing again. It will execute a copy of all the contents of one folder into a folder specified by you. This is ideal if you need to start a new project and use an existing one as the base.

### ****Remove a Directory****

Command: `rmdir`

The “`rmdir`” command allows you to remove a directory created in error. If, for example, you misnamed a folder, you can rename it using the “mv” command or delete it using the “`rmdir`
” command, including the path to the directory.

### ****Download files from the internet****

You'll need the URL of the file you want to download to use Terminal for this.

1. `cd ~/Downloads/`
2. `curl [URL of the file you want to download]`

If you want to download the file to a directory other than your Downloads folder, replace `~/Downloads/` with the path to that folder, or drag it onto the Terminal window after typing the `cd` command.

### **Change the default file type for screenshots**

By default, macOS saves screenshots as .png files. To change that to .jpg, do this:

1. `defaults write com.apple.screencapture type JPG`
2. Press Return.
3. `killall SystemUIServer`
4. Press Return.

### ****Quit Terminal****

- Click “Terminal” from the main Apple menu.

![https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/Screen-Shot-2022-09-15-at-8.36.10-AM.png?w=914&ssl=1](https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/Screen-Shot-2022-09-15-at-8.36.10-AM.png?w=914&ssl=1)

- Choose “Quit Terminal.”

![https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/Screen-Shot-2022-09-15-at-8.36.22-AM.png?w=922&ssl=1](https://i0.wp.com/www.alphr.com/wp-content/uploads/2022/09/Screen-Shot-2022-09-15-at-8.36.22-AM.png?w=922&ssl=1)

## more ****Terminal Commands****

| COMMAND | ACTION |
| --- | --- |
| cd ~ | Home directory |
| pwd | Show your working directory |
| cd../.. | Move up two levels |
| ls -a | List all entries including those with .(period) and ..(double period) |
| ls -S | Sort files or entries by size |
| ls -la | List detailed directory contents, including hidden files |
| mkdir -p <dir>/<dir> | Create nested folders |
| mkdir <dir1> <dir2> <dir3> | Create several folders at once |
| rm -f <file> | Force removal without confirmation |
| top -o rsize | Sort top by memory usage |
| brew list --cask | List only installed cask |