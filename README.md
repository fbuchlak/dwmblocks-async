# dwmblocks-async

## Installation

```sh
git clone https://github.com/fbuchlak/dwmblocks-async.git
cd dwmblocks-async
sudo make install
```

Apart from that, you need `dwm` to be patched with
[statuscmd](https://dwm.suckless.org/patches/statuscmd/).

## Usage

To set `dwmblocks-async` as your status bar, you need to run it as a background
process on startup. One way is to add the following to `~/.xinitrc`:

```sh
# The binary of `dwmblocks-async` is named `dwmblocks`
dwmblocks &
```

### Modifying the blocks

You can define your status bar blocks in `config.c`:

```c
Block blocks[] = {
    ...
    {"date",   15, 1},
    ...
}
```

Each block has the following properties:

| Property        | Description                                                                                                                                        |
| --------------- | -------------------------------------------------------------------------------------------------------------------------------------------------- |
| Command         | The command you wish to execute in your block.                                                                                                     |
| Update interval | Time in seconds, after which you want the block to update. If `0`, the block will never be updated.                                                |
| Update signal   | Signal to be used for triggering the block. Must be a positive integer. If `0`, a signal won't be set up for the block and it will be unclickable. |


## Credits

[Utkarsh Verma](https://github.com/UtkarshVerma/dwmblocks-async) 
