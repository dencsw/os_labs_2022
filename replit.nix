{ pkgs }: {
	deps = [
		pkgs.python39Packages.pip
  pkgs.imagemagick6_light
  pkgs.csound
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}