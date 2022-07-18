call plug#begin()
  Plug 'vim-airline/vim-airline'
  Plug 'vim-airline/vim-airline-themes'
  Plug 'ryanoasis/vim-devicons'
  Plug 'ntk148v/vim-horizon'
  Plug 'sheerun/vim-polyglot'
  Plug 'jiangmiao/auto-pairs'
  Plug 'ap/vim-css-color'
  Plug 'preservim/nerdtree'
  Plug 'airblade/vim-gitgutter'
call plug#end()
set clipboard+=unnamedplus
set background=dark
set completeopt=noinsert,menuone,noselect
set hidden
set inccommand=split
set encoding=utf-8
set mouse=a
set number
set splitbelow splitright
set title
set timeoutlen=0
set wildmenu
set expandtab
set wildmode=longest,list,full
set shiftwidth=2
set tabstop=2
let g:airline_theme='minimalist'
colorscheme horizon
filetype plugin indent on
syntax on
let g:airline_powerline_fonts = 1
let g:airline#extensions#tabnine#enabled = 1
let NERDTreeShowHidden = 1
nmap <F6> :NERDTreeToggle<CR>
