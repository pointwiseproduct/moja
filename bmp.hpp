/*
----class/struct
dot
    1�h�b�g��\���\����
    b1u_t b; //blue
    b1u_t g; //green
    b1u_t r; //red
    b1u_t a; //alpha
logic_error
    ���s�ȑO�̃G���[�ɋN�������O
domain_error
    ���s���G���[�ɋN�������O
mem_error
    domain_error
    �������A���P�[�V�����Ɋւ���G���[
BitCountError
    logic_error
    �F���Ɋւ���G���[
----�Z�p�^
b4_t
b4u_t
    4�o�C�g�̌^
b2_t
b2u_t
    2�o�C�g�̌^
b1_t
b1u_t
    1�o�C�g�̌^
----enum
ColorNum::b1
ColorNum::b4
ColorNum::b8
ColorNum::b24
ColorNum::b32
    1bit 4bit 8bit 24bit 32bit��\��enum
ColorNum::n2
ColorNum::n16
ColorNum::n256
    2�F(1bit) 16�F(2bit) 256�F(8bit)��\��enum
----method
ctor()
    �g�p�֎~
ctor(
    const b4_t BitCount_,
    const b4_t Width_,
    const b4_t Height_,
    const b4_t Xppm_ = 0,
    const b4_t Yppm_ = 0,
    const b4_t Compression_ = 0
)
ctor(const char *const path)
ctor(const char *const path)
ctor(std::basic_ifstream<T, U> &f)
    Xppm_�y��Yppm_�̓I�v�V�����Ŏw�肷��
    Compression_�����݂���Ӗ��͍��̏��Ȃ�
    [BitCount_]    �r�b�g�[�x
    [Width_]       ��
    [Height_]      ����
    [Xppm_]        X��px/meter
    [Yppm_]        Y��px/meter
    [Compression_] ���k�͖���
    [path]         �J���t�@�C���̃p�X
    [f]            �J���t�@�C����fstream
virtual dtor()
    �p���b�g�z��Ɖ�f�z����J������
static dot rgb(int r, int g, int b)
static dot rgb(int r, int g, int b, int a)
    �F�������dot��Ԃ�
    ������3�̃o�[�W������alpha����������
    [r] �Ԑ���
    [g] �ΐ���
    [b] ����
    [a] alpha����
int width() const
int width(int v)
int width(int v, int i)
int width(int v, dot d)
int height() const
int height(int v)
int height(int v, int i)
int height(int v, dot d)
    ��/�����𓾂�/�ݒ肷��
    �ݒ�֐��͍ő�Őݒ�O�̉摜�f�[�^ + �ݒ��̉摜�f�[�^�̕�����
    �q�[�v�̈�������R�X�g�̍����֐��ł��邪�擾�֐���
    �����o�̒l��Ԃ������ł���
    �ݒ�֐��Ńp���b�g�C���f�b�N�X��dot���w�肷���
    �V���ɂł����󔒗̈悪���̃f�[�^�Ŗ��߂���
    �w�肵�Ȃ������ꍇ�͖���`�ƂȂ�
    �󔒗̈悪�������Ȃ��ꍇ�ɂ͈Ӗ����Ȃ����̂ƂȂ�
    �p���b�g�̕K�v�ȌĂяo���őR��ׂ���ԂłȂ���w/h���ꂼ��
        * ��O width_plt_set_BitCountError (BitCountError)
        * ��O height_plt_set_BitCountError (BitCountError)
    truecolor �łȂ��Ƃ����Ȃ��Ăяo����truecolor�łȂ���w/h���ꂼ��
        * ��O width_trueclr_set_BitCountError (BitCountError)
        * ��O height_trueclr_set_BitCountError (BitCountError)
    �s���ȃp���b�g�C���f�b�N�X��n����w/h���ꂼ��
        * ��O width_plt_set_OOR (logic_error)
        * ��O height_plt_set_OOR (logic_error)
    �𑗏o����
    [v] �V�����ݒ肷��l
    [i] �󔒗̈�𖄂߂�̂Ɏg���p���b�g�C���f�b�N�X
    [d] �󔒗̈�𖄂߂�̂Ɏg���F���
array_t<int, 2> resize(int w_, int h_)
array_t<int, 2> resize(int w_, int h_, int i)
array_t<int, 2> resize(int w_, int h_, dot d)
    ��/������ݒ肵�ݒ�O�̒l��Ԃ�
    �󔒗̈悪��������ꍇ�͂Ȃɂœh��Ԃ������w��ł���
    �w�肵�Ȃ������ꍇ�̋󔒗̈�̃f�[�^�͖���`
    �p���b�g���K�v�ȌĂяo���őR��ׂ���ԂłȂ���
        * ��O resize_plt_BitCountError (BitCountError)
    truecolor �łȂ��Ƃ����Ȃ��Ăяo����truecolor�łȂ���
        * ��O resize_trueclr_BitCountError (BitCountError)
    �s���ȃp���b�g�C���f�b�N�X��n����
        * ��O resize_plt_OOR (logic_error)
    �𑗏o����
    [w_] �V������
    [h_] �V��������
    [i]  �h��Ԃ��p���b�g�i���o�[
    [d]  �h��Ԃ��F
int xppm()const
int xppm(int v)
int yppm()const
int yppm(int v)
    ��/�����𓾂�/�ݒ肷��
    �ݒ�֐��͐ݒ肷��O�̒l��Ԃ�
    [v] �V�����l
int pltnum() const
    �p���b�g�̐��𓾂�
    �p���b�g�������Ă��Ȃ��Ɨ�O pltnum_BitCountError (BitCountError) �𑗏o����
dot setplt(int i, dot d)
    �p���b�g��i�Ԗڂ̐F��d�ɐݒ肷��
    �p���b�g�������Ă��Ȃ���
        * ��O setplt_BitCountError (BitCountError)
    �͈͊O�A�N�Z�X���N�����
        * ��O setplt_OOR (logic_error) �𑗏o����
    [i] �ύX�������F�̃p���b�g��̈ʒu
    [d] �F
int pltidx(int x, int y) const
int pltidx(int x, int y, int pltnum)
    �w�肵�����W�̃p���b�g�C���f�b�N�X�𓾂�/�ݒ肷��
    �ݒ�p�̊֐��ł͐ݒ肷��O�̒l��Ԃ�
    �p���b�g�������Ă��Ȃ���
        * �擾�p�̊֐��ł͗�O pltidx_get_BitCountError (BitCountError)
        * �ݒ�p�̊֐��ł͗�O pltidx_set_BitCountError (BitCountError)
    �𑗏o����
    [x]      x���W
    [y]      y���W
    [pltnum] �p���b�g�̃i���o�[
dot clr(int x, int y) const
dot clr(int x, int y, dot d)
    �w����W�̐F���擾/�ݒ肷��
    �擾�̓p���b�g�̏����񏊎����킸�S�F���Ŏ擾�\
    �ݒ�֐��Ńp���b�g���������Ă����ꍇ
        * ��O clr_set_BitCountError (BitCountError)
    �𑗏o����
void line(int xa, int ya, int xb, int yb, dot d)
void line(int xa, int ya, int xb, int yb, int idx)
    ��������
template<typename T, typenaem U>
    void write(basic_ofstream<T, U> &f) const
void write(const char* const path) const
void write(const char* const path) const
    �t�@�C���ɏo�͂���
    [path] �t�@�C���p�X
    [f]    �o�͑Ώ�
*/

#ifndef __TTXY_LEGACY_BMP__
#define __TTXY_LEGACY_BMP__

#include <cmath>
#include <cstring>
#include <string>
#include <fstream>
#include <utility>
#include <exception>
#include <locale>
#include <cstdint>

#ifndef __TTXY_LEGACY_ST__
#define __TTXY_LEGACY_ST__

namespace tt_legacy{
    template<typename T> T *ta_index(const T *str, const T &c, const T &tmnl = T()){
        for(; *str != tmnl && *str != c; ++str);
        return const_cast<T*>(*str == tmnl ? reinterpret_cast<T*>(0) : str);
    }

    template<typename T> T *ta_rindex(const T *str, const T &c, const T &tmnl = T()){
        T *r = reinterpret_cast<T*>(0);
        for(; *str != tmnl; ++str)
            if(str == c) r = const_cast<T*>(str);
        return r;
    }
}

namespace tt_legacy{
    template<typename T> int atcmp(const T *str, const T *tus, const T &trm = T()){
        for(; ; ++str, ++tus){
            if(*str == *tus){
                if(*str == trm)
                    return 0;
                else
                    continue;
            }else{
                return *str > *tus ? 1 : -1;
            }
        }
    }
}

#include <cstring>
namespace tt_legacy{
    template<typename T, typename V> inline T *memcpy(T *dst, T *src, V s){
        return reinterpret_cast<T*>(std::memcpy(
            reinterpret_cast<void*>(dst),
            reinterpret_cast<const void*>(src),
            sizeof(T) * static_cast<size_t>(s)
        ));
    }

    template<typename T, typename V> inline T *memcpy(T *dst, const T *src, V s){
        return reinterpret_cast<T*>(std::memcpy(
            reinterpret_cast<void*>(dst),
            reinterpret_cast<const void*>(src),
            sizeof(T) * static_cast<size_t>(s)
        ));
    }
}

namespace tt_legacy{
    template<unsigned int a, unsigned int b> struct pow{
        enum{ value = a * pow<a, b - 1>::value };
    };

    template<unsigned int a> struct pow<a, 1>{
        enum{ value = a };
    };

    template<unsigned int a> struct pow<a, 0>{
        enum{ value = 1 };
    };
}

namespace tt_legacy{
    template<typename T> inline int ta_length(const T *sequence, const T &tv = 0){
        int i = 0;
        for(; sequence[i] != tv; ++i);
        return i;
    }
}

namespace tt_legacy{
    template<typename T, typename U> inline T &force_cast(U &a){
        return *reinterpret_cast<T*>(&a);
    }
}

namespace tt_legacy{
    template<typename T, int N> struct array_t{
        T data[N];
    };
}

#endif // __TTXY_LEGACY_ST__

namespace tt_legacy{

#ifdef _MSC_VER
#pragma warning(disable:4290)
#pragma warning(disable:4715)
#endif

#ifndef _MSC_VER
#define _DEBUG
#endif

    template<typename dammy_t>
    class xbmp{
        //--------���J�^
    public:
        typedef std::int32_t
            b4_t;    //4�o�C�g
        typedef std::uint32_t
            b4u_t;    //4�o�C�g unsigned

        typedef std::int16_t
            b2_t;    //2�o�C�g
        typedef std::uint16_t
            b2u_t;    //2�o�C�g unsigned

        typedef std::int8_t
            b1_t;    //1�o�C�g
        typedef std::uint8_t
            b1u_t;    //1�o�C�g unsigned

        //1�h�b�g�̌^
        struct dot{
            b1u_t b;
            b1u_t g;
            b1u_t r;
            b1u_t a;

            bool operator ==(const dot &d){
                return (b == d.b) && (g == d.g) && (r == d.r) && (a == d.a);
            }

            bool operator !=(const dot &d){
                return (b != d.b) && (g != d.g) && (r != d.r) && (a != d.a);
            }
        };

        //�F��
        struct ColorNum{
            enum{
                b1 = 1,
                b4 = 4,
                b8 = 8,
                b24 = 24,
                b32 = 32,

                n2 = 1,
                n16 = 4,
                n256 = 8
            };
        };

        //--------��O�N���X�Ȃǂ̒�`
    private:
        struct exception_{
            //��O���b�Z�[�W
            virtual const char *msg() const{ return "���Ȃ�"; }
            //��O���o���Ƃ���
            virtual const char *prfn() const{ return "���Ȃ�"; }
        };

    public:
        //���s���O�̃G���[�ɋN�������O
        struct logic_error : exception_{
        };

        //���s���̃G���[�ɋN�������O
        struct domain_error : exception_{
        };

        //�������A���P�[�V�����G���[
        struct mem_error : virtual exception_{
        };

        //�F���G���[
        struct BitCountError : logic_error{
            virtual const char *msg() const{ return "�r�b�g�}�b�v�̐F���G���[�B"; }
        };

        //--------����J�����o
    private:
        //�t�@�C���w�b�_
        char FileHeader[14];
        b4_t &FileSize_;    //�t�@�C���T�C�Y byte
        b4_t &OffBits;        //�t�@�C���擪����摜�f�[�^�܂ł̃I�t�Z�b�g

        //���w�b�_
        //��OS/2����
        char InfomationHeader[40];
        b4_t &Width_;        //��
        b4_t &Height_;        //����
        b2_t &BitCount_;    //�r�b�g�J�E���g
        b4_t &Compression_;    //���k�`��
        b4_t &ImgDataSize_;    //�摜�f�[�^���̃T�C�Y
        b4_t &Xppm_;        //�������̉𑜓x px/Meter
        b4_t &Yppm_;        //�c�����̉𑜓x px/Meter
        b4_t &ClrNum;        //�p���b�g�̎g�p�F��
        b4_t &ImportantClr;    //�d�v�ȃp���b�g�̃C���f�b�N�X

        //�J���[�p���b�g
        dot *ColorPalette_;

        //�摜�f�[�^
        char *ImgData_;

        //�f�[�^��̉���
        //4�o�C�g�̔{���ɂȂ��Ă�
        b4_t width_byte;

        //pltidx�̊eBitCount�ɑΉ����������o�|�C���^��ێ�����
        typedef int (xbmp::*pltidx_get_t)(int, int) const;
        typedef int (xbmp::*pltidx_set_t)(int, int, int);
        pltidx_get_t pltidx_get_;
        pltidx_set_t pltidx_set_;

        //clr
        typedef dot (xbmp::*clr_get_t)(int, int) const;
        typedef dot (xbmp::*clr_set_t)(int, int, dot);
        clr_get_t clr_get_;
        clr_set_t clr_set_;

        //--------����J���\�b�h
    private:
        //dot�𐶐�����
        static dot dot_(){
            dot d;
            d.b = d.g = d.r = d.a = 0;
            return d;
        }

        static dot dot_(b1u_t r, b1u_t g, b1u_t b){
            dot d;
            d.r = r, d.g = g, d.b = b, d.a = 0;
            return d;
        }

        static dot dot_(b1u_t r, b1u_t g, b1u_t b, b1u_t a){
            dot d;
            d.r = r, d.g = g, d.b = b, d.a = a;
            return d;
        }

        static dot dot_(const dot &d_){
            dot d;
            d.r = d_.r, d.g = d_.g, d.b = d_.b, d.a = d_.a;
            return d;
        }

        //width_byte�����肷��
        static b4_t width_byte_b1(b4_t w){
            int a;
            a = w / 8 + (w % 8 ? 1 : 0);
            a = a / 4 + (a % 4 ? 1 : 0);
            a *= 4;
            return a;
        }

        static b4_t width_byte_b4(b4_t w){
            int a;
            a = w / 2 + (w % 2 ? 1 : 0);
            a = a / 4 + (a % 4 ? 1 : 0);
            a *= 4;
            return a;
        }

        static b4_t width_byte_b8(b4_t w){
            int a;
            a = (w / 4 + (w % 4 ? 1 : 0)) * 4;
            return a;
        }

        static b4_t width_byte_b24(b4_t w){
            int a;
            a = w * 3;
            a = a / 4 + (a % 4 ? 1 : 0);
            a *= 4;
            return a;
        }

        static b4_t width_byte_b32(b4_t w){
            int a;
            a = w * 4;
            return a;
        }

        static b4_t width_byte_n(b4_t bc, b4_t w){
            switch(bc){
                case ColorNum::b1:
                    return width_byte_b1(w);

                case ColorNum::b4:
                    return width_byte_b4(w);

                case ColorNum::b8:
                    return width_byte_b8(w);

                case ColorNum::b24:
                    return width_byte_b24(w);

                case ColorNum::b32:
                    return width_byte_b32(w);
            }
        }

        //--------���J���\�b�h�Ɗ֘A����N���X
    public:
        //�F�������dot��Ԃ�
        static dot rgb(int r, int g, int b){
            return dot_(static_cast<b1u_t>(r), static_cast<b1u_t>(g), static_cast<b1u_t>(b));
        }

        static dot rgb(int r, int g, int b, int a){
            return dot_(static_cast<b1u_t>(r), static_cast<b1u_t>(g), static_cast<b1u_t>(b), static_cast<b1u_t>(a));
        }

        //�t�@�C���ɏo�͂���
        template<typename T, typename U>
        void write(std::basic_ofstream<T, U> &f) const{
                //�e�w�b�_�̒l�����肷��i�x���j
                int pltsize; //�p���b�g�T�C�Y
                switch(BitCount_){
                    case ColorNum::n2:
                    case ColorNum::n16:
                    case ColorNum::n256:
                        pltsize = (1 << BitCount_) * 4;
                        break;

                    default:
                        pltsize = 0;
                }

                //�t�@�C���T�C�Y
                FileSize_
                    = /* �t�@�C���w�b�_ */    14
                    + /* ���w�b�_ */        40
                    + /* �p���b�g */        pltsize
                    + /* �摜�f�[�^ */        width_byte * Height_;

                //�摜�f�[�^���܂ł̃I�t�Z�b�g
                OffBits = FileSize_ - width_byte * Height_;

                //�摜�f�[�^���̃T�C�Y
                ImgDataSize_ = width_byte * Height_;

                //�p���b�g�̎g�p�F��
                if(BitCount_ <= ColorNum::n256){
                    ClrNum = 1 << BitCount_;
                }else{ ClrNum = 0; }

                //�t�@�C���w�b�_�y�я��w�b�_
                f.write(reinterpret_cast<const T*>(FileHeader), 14);
                f.write(reinterpret_cast<const T*>(InfomationHeader), 40);

                //�J���[�p���b�g
                switch(BitCount_){
                    {
                    case ColorNum::n2:
                    case ColorNum::n16:
                    case ColorNum::n256:
                        f.write(reinterpret_cast<const T*>(ColorPalette_), sizeof(dot) * static_cast<std::size_t>(1 << BitCount_));
                        break;
                    }

                    case ColorNum::b24:
                        break;

                    case ColorNum::b32:
                        break;
                }

                //�摜�f�[�^��
                f.write(reinterpret_cast<const T*>(ImgData_), width_byte * Height_);
        }

        void write(const char* const path) const{
            std::ofstream f(path, std::ios::binary);
            write(f);
        }

        //��/�����𓾂�/�ݒ肷��
        struct width_plt_set_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "width (plt/set)"; }
        };

        struct width_plt_set_OOR : logic_error{
            virtual const char *msg() const{ return "�p���b�g�̃C���f�b�N�X���͈͂𒴂��܂����B"; }
            virtual const char *prfn() const{ return "width (plt/set)"; }
        };

        struct width_trueclr_set_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "width (trueclr/set)"; }
        };

        struct height_plt_set_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "height (plt/set)"; }
        };

        struct height_plt_set_OOR : logic_error{
            virtual const char *msg() const{ return "�p���b�g�̃C���f�b�N�X���͈͂𒴂��܂����B"; }
            virtual const char *prfn() const{ return "height (plt/set)"; }
        };

        struct height_trueclr_set_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "height (trueclr/set)"; }
        };

        int width() const{
            return Width_;
        }

        int width(int v){
            if(v == Width_){ return Width_; }

            int Width_old = Width_;
            Width_ = v;

            int width_byte_old = width_byte;
            width_byte = width_byte_n(BitCount_, Width_);

            char *ImgData_old = ImgData_;
            ImgData_ = new char[width_byte * Height_];

            int width_regline = Width_ > Width_old ? width_byte_old : width_byte;

            for(int y = 0; y < Height_; y++)
                std::memcpy(
                    (ImgData_ + (y * width_byte)),
                    (ImgData_old + (y * width_byte_old)),
                    width_regline
                );

            delete[] ImgData_old;

            return Width_old;
        }

        int width(int v, int i){
#ifdef _DEBUG
            if(BitCount_ > ColorNum::b8){
                throw(width_plt_set_BitCountError());
            }

            if(i >= (1 << BitCount_)){
                throw(width_plt_set_OOR());
            }
#endif
            int Width_old = Width_;
            int a = width(v);

            //�h��Ԃ�
            if(v > Width_old){
                switch(BitCount_){
                    case ColorNum::b1:
                        for(int y = 0; y < Height_; y++)
                            for(int x = Width_old; x < Width_; x++)
                                pltidx_2(x, y, i);
                        break;

                    case ColorNum::b4:
                        for(int y = 0; y < Height_; y++)
                            for(int x = Width_old; x < Width_; x++)
                                pltidx_16(x, y, i);
                        break;

                    case ColorNum::b8:
                        for(int y = 0; y < Height_; y++)
                            for(int x = Width_old; x < Width_; x++)
                                pltidx_256(x, y, i);
                        break;
                }
            }

            return a;
        }

        int width(int v, dot d){
#ifdef _DEBUG
            if(BitCount_ < ColorNum::b24){
                throw(width_trueclr_set_BitCountError());
            }
#endif
            int Width_old = Width_;
            int a = width(v);

            //�h��Ԃ�
            if(v > Width_old){
                switch(BitCount_){
                    case ColorNum::b24:
                        for(int y = 0; y < Height_; y++)
                            for(int x = Width_old; x < Width_; x++)
                                clr_24(x, y, d);
                        break;

                    case ColorNum::b32:
                        for(int y = 0; y < Height_; y++)
                            for(int x = Width_old; x < Width_; x++)
                                clr_32(x, y, d);
                        break;
                }
            }

            return a;
        }

        int height() const{
            return Height_;
        }

        int height(int v){
            if(v == Height_){ return Height_; }

            int Height_old = Height_;
            Height_ = v;

            char *ImgData_old = ImgData_;
            ImgData_ = new char[width_byte * Height_];

            if(Height_ > Height_old){
                std::memcpy(ImgData_ + (Height_ - Height_old) * width_byte, ImgData_old, width_byte * Height_old);
            }else{
                std::memcpy(ImgData_, ImgData_old + (Height_old - Height_) * width_byte, width_byte * Height_);
            }

            delete[] ImgData_old;

            return Height_old;
        }

        int height(int v, int i){
#ifdef _DEBUG
            if(BitCount_ > ColorNum::b8){
                throw(height_plt_set_BitCountError());
            }

            if(i >= (1 << BitCount_)){
                throw(height_plt_set_OOR());
            }
#endif
            int Height_old = Height_;
            int a = height(v);

            //�h��Ԃ�
            if(v > Height_old){
                switch(BitCount_){
                    case ColorNum::b1:
                        for(int y = Height_old; y < Height_; y++)
                            for(int x = 0; x < Width_; x++)
                                pltidx_2(x, y, i);
                        break;

                    case ColorNum::b4:
                        for(int y = Height_old; y < Height_; y++)
                            for(int x = 0; x < Width_; x++)
                                pltidx_16(x, y, i);
                        break;

                    case ColorNum::b8:
                        for(int y = Height_old; y < Height_; y++)
                            for(int x = 0; x < Width_; x++)
                                pltidx_256(x, y, i);
                        break;
                }
            }

            return a;
        }

        int height(int v, dot d){
#ifdef _DEBUG
            if(BitCount_ < ColorNum::b24){
                throw(width_trueclr_set_BitCountError());
            }
#endif
            int Height_old = Height_;
            int a = height(v);

            //�h��Ԃ�
            if(v > Height_old){
                switch(BitCount_){
                    case ColorNum::b24:
                        for(int y = Height_old; y < Height_; y++)
                            for(int x = 0; x < Width_; x++)
                                clr_24(x, y, d);
                        break;

                    case ColorNum::b32:
                        for(int y = Height_old; y < Height_; y++)
                            for(int x = 0; x < Width_; x++)
                                clr_32(x, y, d);
                        break;
                }
            }

            return a;
        }

        //�L�k����
        struct resize_plt_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "resize (plt)"; }
        };

        struct resize_trueclr_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "resize (trueclr)"; }
        };

        struct resize_plt_OOR : logic_error{
            virtual const char *msg() const{ return "�p���b�g�̃C���f�b�N�X���͈͂𒴂��܂����B"; }
            virtual const char *prfn() const{ return "resize (plt)"; }
        };

        array_t<int, 2> resize(int w_, int h_){
            array_t<int, 2> a;
            a.data[0] = w_;
            a.data[1] = h_;

            bool wb = w_ == Width_, hb = h_ == Height_;

            if(wb && hb){
                return a;
            }else{
                int Width_old = Width_, Height_old = Height_;
                Width_ = w_;
                Height_ = h_;

                int width_byte_old = width_byte;
                width_byte = width_byte_n(BitCount_, Width_);

                char *ImgData_old = ImgData_;
                ImgData_ = new char[width_byte * Height_];

                int
                    width_regline = Width_ > Width_old ? width_byte_old : width_byte,
                    Height_regline = Height_ > Height_old ? Height_old : Height_;

                if(Height_ > Height_old){
                    char *dst = ImgData_ + (Height_ - Height_old) * width_byte;
                    for(int y = 0; y < Height_regline; y++)
                        std::memcpy(
                            (dst + (y * width_byte)),
                            (ImgData_old + (y * width_byte_old)),
                            width_regline
                        );
                }else{
                    char *src = ImgData_old + (Height_old - Height_) * width_byte_old;
                    for(int y = 0; y < Height_regline; y++)
                        std::memcpy(
                            (ImgData_ + (y * width_byte)),
                            (src + (y * width_byte_old)),
                            width_regline
                        );
                }
            }

            return a;
        }

        array_t<int, 2> resize(int w_, int h_, int i){
#ifdef _DEBUG
            if(BitCount_ > ColorNum::b8)
                throw(resize_plt_BitCountError());
            if(i >= pltnum())
                throw(resize_plt_OOR());
#endif
            bool wb = w_ == Width_, hb = h_ == Height_;

            if(wb && hb){
                array_t<int, 2> a;
                a.data[0] = w_;
                a.data[1] = h_;

                return a;
            }else{
                int Width_old = Width_, Height_old = Height_;
                int width_byte_old = width_byte;
                int
                    width_regline = Width_ > Width_old ? width_byte_old : width_byte,
                    Height_regline = Height_ > Height_old ? Height_old : Height_;

                array_t<int, 2> a = resize(w_, h_);

                if(w_ > Width_old){
                    switch(BitCount_){
                        case ColorNum::b1:
                            for(int y = 0; y < Height_; y++)
                                for(int x = Width_old; x < Width_; x++)
                                    pltidx_2(x, y, i);
                            break;

                        case ColorNum::b4:
                            for(int y = 0; y < Height_; y++)
                                for(int x = Width_old; x < Width_; x++)
                                    pltidx_16(x, y, i);
                            break;

                        case ColorNum::b8:
                            for(int y = 0; y < Height_; y++)
                                for(int x = Width_old; x < Width_; x++)
                                    pltidx_256(x, y, i);
                            break;
                    }
                }

                if(h_ > Height_old){
                    switch(BitCount_){
                        case ColorNum::b1:
                            for(int y = Height_old; y < Height_; y++)
                                for(int x = 0; x < Width_; x++)
                                    pltidx_2(x, y, i);
                            break;

                        case ColorNum::b4:
                            for(int y = Height_old; y < Height_; y++)
                                for(int x = 0; x < Width_; x++)
                                    pltidx_16(x, y, i);
                            break;

                        case ColorNum::b8:
                            for(int y = Height_old; y < Height_; y++)
                                for(int x = 0; x < Width_; x++)
                                    pltidx_256(x, y, i);
                            break;
                    }
                }

                return a;
            }
        }

        array_t<int, 2> resize(int w_, int h_, dot d){
#ifdef _DEBUG
            if(BitCount_ < ColorNum::b24)
                throw(resize_trueclr_BitCountError());
#endif
            bool wb = w_ == Width_, hb = h_ == Height_;

            if(wb && hb){
                array_t<int, 2> a;
                a.data[0] = w_;
                a.data[1] = h_;

                return a;
            }else if(wb){
                array_t<int, 2> a;
                a.data[0] = w_;
                a.data[1] = height(h_, d);

                return a;
            }else if(hb){
                array_t<int, 2> a;
                a.data[0] = width(w_, d);
                a.data[1] = h_;

                return a;
            }else{
                int Width_old = Width_, Height_old = Height_;
                int widht_byte_old = width_byte;
                int
                    widht_regline = Width_ > Width_old ? widht_byte_old : width_byte,
                    Height_regline = Height_ > Height_old ? Height_old : Height_;

                array_t<int, 2> a = resize(w_, h_);

                if(w_ > Width_old){
                    switch(BitCount_){
                        case ColorNum::b24:
                            for(int y = 0; y < Height_; y++)
                                for(int x = Width_old; x < Width_; x++)
                                    clr_24(x, y, d);
                            break;

                        case ColorNum::b32:
                            for(int y = 0; y < Height_; y++)
                                for(int x = Width_old; x < Width_; x++)
                                    clr_32(x, y, d);
                            break;
                    }
                }

                if(h_ > Height_old){
                    switch(BitCount_){
                        case ColorNum::b24:
                            for(int y = Height_old; y < Height_; y++)
                                for(int x = 0; x < Width_; x++)
                                    clr_24(x, y, d);
                            break;

                        case ColorNum::b32:
                            for(int y = Height_old; y < Height_; y++)
                                for(int x = 0; x < Width_; x++)
                                    clr_32(x, y, d);
                            break;
                    }
                }

                return a;
            }
        }

        //�p���b�g�̐��𓾂�
        struct pltnum_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "pltnum"; }
        };

        int pltnum() const{
#ifdef _DEBUG
            if(BitCount_ > ColorNum::n256) throw(pltnum_BitCountError());
#endif //_DEBUG
            return 1 << BitCount_;
        }

        //�p���b�g��ݒ肷��
        struct setplt_BitCountError : BitCountError{//�F����O
            virtual const char *prfn() const{ return "setplt"; }
        };

        struct setplt_OOR : logic_error{//�͈͊O�A�N�Z�X
            virtual const char *msg() const{ return "�p���b�g�̃C���f�b�N�X���͈͂𒴂��܂����B"; }
            virtual const char *prfn() const{ return "setplt"; }
        };

        dot setplt(int i, dot d){
#ifdef _DEBUG
            if(BitCount_ > ColorNum::n256) throw(setplt_BitCountError());
            if(i > ((1 << BitCount_) - 1)) throw(setplt_OOR());
#endif //_DEBUG
            dot a = dot_(ColorPalette_[i]);
            ColorPalette_[i] = d;
            return a;
        }

        //�w����W�̃p���b�g�𓾂�
        struct pltidx_get_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "pltidx (get)"; }
        };

        struct pltidx_set_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "pltidx (set)"; }
        };

    private:
        int pltidx_2(int w_, int h_) const{
            return ((ImgData_[(Height_ - h_ - 1) * width_byte + w_ / 8] >> (7 - (w_ % 8))) & 1);
        }

        int pltidx_16(int w_, int h_) const{
            return (ImgData_[(Height_ - h_ - 1) * width_byte + w_ / 2] >> (w_ % 2 ? 4 : 0)) & 15;
        }

        int pltidx_256(int w_, int h_) const{
            return ImgData_[(Height_ - h_ - 1) * width_byte + w_];
        }

        int pltidx_truecolor(int, int) const{
#ifdef _DEBUG
            throw(pltidx_get_BitCountError());
#endif //_DEBUG
            return 0;
        }

        int pltidx_2(int w_, int h_, int pltnum){
            b1u_t &data(reinterpret_cast<b1u_t*>(ImgData_)[(Height_ - h_ - 1) * width_byte + w_ / 8]);
            int shiftnum = 7 - (w_ % 8);
            int buff = (data >> shiftnum) & 1;
            data &= ~(1 << shiftnum);
            data |= pltnum << shiftnum;
            return buff;
        }

        int pltidx_16(int w_, int h_, int pltnum){
            b1u_t &data(reinterpret_cast<b1u_t*>(ImgData_)[(Height_ - h_ - 1) * width_byte + w_ / 2]);
            int shiftnum = (w_ % 2 ? 4 : 0);
            int buff = (data >> shiftnum) & 1;
            data &= ~(15 << shiftnum);
            data |= pltnum << shiftnum;
            return buff;
        }

        int pltidx_256(int w_, int h_, int pltnum){
            b1u_t &data(reinterpret_cast<b1u_t*>(ImgData_)[(Height_ - h_ - 1) * width_byte + w_]);
            int buff = data;
            data = static_cast<b1u_t>(pltnum);
            return buff;
        }

        int pltidx_truecolor(int, int, int){
#ifdef _DEBUG
            throw(pltidx_set_BitCountError());
#endif //_DEBUG
            return 0;
        }

    public:
        int pltidx(int x, int y) const{
            return (this->*pltidx_get_)(x, y);
        }

        int pltidx(int x, int y, int pltnum){
            int a = pltidx(x, y);
            (this->*pltidx_set_)(x, y, pltnum);
            return a;
        }

        //�w����W�̐F�𓾂�/�ݒ肷��
        struct clr_set_BitCountError : BitCountError{
            virtual const char *prfn() const{ return "clr (set)"; }
        };

    private:
        dot clr_1(int w, int h) const{
            return ColorPalette_[pltidx_2(w, h)];
        }

        dot clr_4(int w, int h) const{
            return ColorPalette_[pltidx_16(w, h)];
        }

        dot clr_8(int w, int h) const{
            return ColorPalette_[pltidx_256(w, h)];
        }

        dot clr_24(int w, int h) const{
            return *reinterpret_cast<dot*>(&ImgData_[(Height_ - h - 1) * width_byte + w * 3]);
        }

        dot clr_32(int w, int h) const{
            return *reinterpret_cast<dot*>(&ImgData_[(Height_ - h - 1) * width_byte + w * 4]);
        }

        dot clr_pltclr(int, int, dot){
            throw(clr_set_BitCountError());
            return dot_();
        }

        dot clr_24(int w, int h, dot d){
            dot &d_(*reinterpret_cast<dot*>(&ImgData_[(Height_ - h - 1) * width_byte + w * 3])), prv;
            prv = d_;
            d_.r = d.r, d_.g = d.g, d_.b = d.b;
            return prv;
        }

        dot clr_32(int w, int h, dot d){
            dot &d_(*reinterpret_cast<dot*>(&ImgData_[(Height_ - h - 1) * width_byte + w * 4])), prv;
            prv = d_;
            d_ = d;
            return prv;
        }

    public:
        dot clr(int x, int y) const{
            return (this->*clr_get_)(x, y);
        }

        dot clr(int x, int y, dot d){
            return (this->*clr_set_)(x, y, d);
        }

        //ppm���擾/�ݒ肷��
        int xppm()const{
            return Xppm_;
        }

        int xppm(int v){
            int a = Xppm_;
            Xppm_ = v;
            return a;
        }

        int yppm()const{
            return Yppm_;
        }

        int yppm(int v){
            int a = Yppm_;
            Yppm_ = v;
            return a;
        }

        //��������
        void line(int x0, int y0, int x1, int y1, dot d){
            int dx, dy, sx, sy, a, i;
            if(x1 > x0){
                dx = x1 - x0;
                sx = 1;
            }else{
                dx = x0 - x1;
                sx = -1;
            }
            if(y1 > y0){
                dy = y1 - y0;
                sy = 1;
            }else{
                dy = y0 - y1;
                sy = -1;
            }
            if(dx > dy){
                a = -dx;
                for(i = 0; i <= dx; ++i){
                    clr(x0, y0, d);
                    x0 += sx;
                    a += 2 * dy;
                    if(a >= 0){
                        y0 += sy;
                        a -= 2 * dx;
                    }
                }
            }else{
                a = -dy;
                for(i = 0; i <= dy; ++i){
                    clr(x0, y0, d);
                    y0 += sy;
                    a += 2 * dx;
                    if(a >= 0){
                        x0 += sx;
                        a -= 2 * dy;
                    }
                }
            }
        }

        void line(int x0, int y0, int x1, int y1, int idx){
            int dx, dy, sx, sy, a, i;
            if(x1 > x0){
                dx = x1 - x0;
                sx = 1;
            }else{
                dx = x0 - x1;
                sx = -1;
            }
            if(y1 > y0){
                dy = y1 - y0;
                sy = 1;
            }else{
                dy = y0 - y1;
                sy = -1;
            }
            if(dx > dy){
                a = -dx;
                for(i = 0; i <= dx; ++i){
                    pltidx(x0, y0, idx);
                    x0 += sx;
                    a += 2 * dy;
                    if(a >= 0){
                        y0 += sy;
                        a -= 2 * dx;
                    }
                }
            }else{
                a = -dy;
                for(i = 0; i <= dy; ++i){
                    pltidx(x0, y0, idx);
                    y0 += sy;
                    a += 2 * dx;
                    if(a >= 0){
                        x0 += sx;
                        a -= 2 * dy;
                    }
                }
            }
        }

        //--------����������
    private:
        //���ʏ���������
        void CommonInit(){
            //�t�@�C���^�C�v
            FileHeader[0] = 'B';
            FileHeader[1] = 'M';

            //�\��̈�
            FileHeader[6] = FileHeader[7] = FileHeader[8] = FileHeader[9] = 0;

            //���w�b�_�̃T�C�Y
            b4_t &InfoHead_Size(*reinterpret_cast<b4_t*>(&InfomationHeader[0]));
            InfoHead_Size = 40;

            //�v���[����
            b2_t &Planes(*reinterpret_cast<b2_t*>(&InfomationHeader[12]));
            Planes = 1;

            //px per meter
            Xppm_ = 0;
            Yppm_ = 0;

            //ImportantColor�Ȃ񂾂��Ǎ���Ӗ���������Ȃ�
            ImportantClr = 0;
        }

        //pltidx�����o�|�C���^��������
        void Init_pltidx(){
            switch(BitCount_){
                case ColorNum::n2:
                    pltidx_get_ = &xbmp::pltidx_2;
                    pltidx_set_ = &xbmp::pltidx_2;
                    break;

                case ColorNum::n16:
                    pltidx_get_ = &xbmp::pltidx_16;
                    pltidx_set_ = &xbmp::pltidx_16;
                    break;

                case ColorNum::n256:
                    pltidx_get_ = &xbmp::pltidx_256;
                    pltidx_set_ = &xbmp::pltidx_256;
                    break;

                case ColorNum::b24:
                case ColorNum::b32:
                    pltidx_get_ = &xbmp::pltidx_truecolor;
                    pltidx_set_ = &xbmp::pltidx_truecolor;
                    break;
            }
        }

        //clr�����o�|�C���^��������
        void Init_clr(){
            switch(BitCount_){
                case ColorNum::n2:
                    clr_get_ = &xbmp::clr_1;
                    clr_set_ = &xbmp::clr_pltclr;
                    break;

                case ColorNum::n16:
                    clr_get_ = &xbmp::clr_4;
                    clr_set_ = &xbmp::clr_pltclr;
                    break;

                case ColorNum::n256:
                    clr_get_ = &xbmp::clr_8;
                    clr_set_ = &xbmp::clr_pltclr;
                    break;

                case ColorNum::b24:
                    clr_get_ = &xbmp::clr_24;
                    clr_set_ = &xbmp::clr_24;
                    break;

                case ColorNum::b32:
                    clr_get_ = &xbmp::clr_32;
                    clr_set_ = &xbmp::clr_32;
                    break;
            }
        }

    //���ʃ����o�������q
#define CommonMemberInit \
        FileSize_(*reinterpret_cast<b4_t*>(&FileHeader[2])), \
        OffBits(*reinterpret_cast<b4_t*>(&FileHeader[10])), \
        Width_(*reinterpret_cast<b4_t*>(&InfomationHeader[4])), \
        Height_(*reinterpret_cast<b4_t*>(&InfomationHeader[8])), \
        BitCount_(*reinterpret_cast<b2_t*>(&InfomationHeader[14])), \
        Compression_(*reinterpret_cast<b4_t*>(&InfomationHeader[16])), \
        ImgDataSize_(*reinterpret_cast<b4_t*>(&InfomationHeader[20])), \
        Xppm_(*reinterpret_cast<b4_t*>(&InfomationHeader[24])), \
        Yppm_(*reinterpret_cast<b4_t*>(&InfomationHeader[28])), \
        ClrNum(*reinterpret_cast<b4_t*>(&InfomationHeader[32])), \
        ImportantClr(*reinterpret_cast<b4_t*>(&InfomationHeader[36])), \
        ColorPalette_(NULL), \
        ImgData_(NULL)

    private:
        xbmp() : CommonMemberInit{}

        template<typename T, typename U>
        static void ctor_read(xbmp &obj, std::basic_ifstream<T, U> &f){
            //���w�b�_�ƃt�@�C���w�b�_��ǂ�
            f.read(reinterpret_cast<T*>(obj.FileHeader), 14);
            f.read(reinterpret_cast<T*>(obj.InfomationHeader), 40);

            //�����ɂ͑Ή����Ă��Ȃ�
            if(obj.Width_ <= 0 || obj.Height_ <= 0) throw(bmp_SizeIsNegative());

            //���̃����o�����肷��
            obj.width_byte = width_byte_n(obj.BitCount_, obj.Width_);
            obj.ImgData_ = new char[obj.width_byte * obj.Height_];
            if(obj.BitCount_ <= ColorNum::b8) obj.ColorPalette_ = new dot[1 << obj.BitCount_]();
            obj.Init_pltidx();
            obj.Init_clr();

            //�J���[�p���b�g
            switch(obj.BitCount_){
                {
                case ColorNum::n2:
                case ColorNum::n16:
                case ColorNum::n256:
                    f.read(reinterpret_cast<T*>(obj.ColorPalette_), sizeof(dot) * (1 << obj.BitCount_));
                    break;
                }

                case ColorNum::b24:
                    break;

                case ColorNum::b32:
                    break;

                default:
                    throw(bmp_BitCountIsIllegal());
            }

            //�摜�f�[�^��
            f.read(reinterpret_cast<T*>(obj.ImgData_), obj.width_byte * obj.Height_);
        }

    public:
        struct bmp_BitCountError : logic_error{
            virtual const char *msg() const{ return "�w�肳�ꂽ�r�b�g�����s���ł�"; }
            virtual const char *prfn() const{ return "ctor"; }
        };

        struct bmp_SizeError : logic_error{
            virtual const char *msg() const{ return "�w�肳�ꂽ���܂��͍������s���ł�"; }
            virtual const char *prfn() const{ return "ctor"; }
        };

        struct bmp_ReadError : domain_error{
            virtual const char *msg() const{ return "�ǂݍ��ݎ��s"; }
            virtual const char *prfn() const{ return "ctor"; }
        };

        struct bmp_SizeIsNegative : bmp_ReadError{
            virtual const char *msg() const{ return "��/�����������ł�"; }
        };

        struct bmp_BitCountIsIllegal : bmp_ReadError{
            virtual const char *msg() const{ return "�r�b�g�����s���ł�"; }
        };

        xbmp(
            const b4_t BitCount_,
            const b4_t Width_,
            const b4_t Height_,
            const b4_t Xppm_ = 0,
            const b4_t Yppm_ = 0,
            const b4_t Compression_ = 0
        ) : CommonMemberInit
        {
            CommonInit();

#ifdef _DEBUG
            if(Width_ <= 0 || Height_ <= 0) throw(bmp_SizeError());
#endif //_DEBUG

            this->BitCount_ = BitCount_;
            this->Width_ = Width_;
            this->Height_ = Height_;
            this->Compression_ = 0 /*Compression_ ���݈��k�͖���*/;
            this->Xppm_ = Xppm_;
            this->Yppm_ = Yppm_;

            Init_pltidx();
            Init_clr();

            //�J���[�p���b�g�Ɖ摜�𐶐�����
            switch(BitCount_){
            case ColorNum::b1:
                    ColorPalette_ = new dot[static_cast<std::size_t>(1 << BitCount_)]();
                    width_byte = width_byte_b1(Width_);
                    ImgData_ = new char[width_byte * Height_];
                    break;

                case ColorNum::b4:
                    ColorPalette_ = new dot[static_cast<std::size_t>(1 << BitCount_)]();
                    width_byte = width_byte_b4(Width_);
                    ImgData_ = new char[width_byte * Height_];
                    break;

                case ColorNum::b8:
                    ColorPalette_ = new dot[static_cast<std::size_t>(1 << BitCount_)]();
                    width_byte = width_byte_b8(Width_);
                    ImgData_ = new char[width_byte * Height_];
                    break;

                case ColorNum::b24:
                    width_byte = width_byte_b24(Width_);
                    ImgData_ = new char[width_byte * Height_];
                    break;

                case ColorNum::b32:
                    width_byte = width_byte_b32(Width_);
                    ImgData_ = new char[width_byte * Height_];
                    break;

#ifdef _DEBUG
                default:
                    throw(bmp_BitCountError());
#endif //_DEBUG
            }

            memset(static_cast<void*>(ImgData_), 0, width_byte * Height_);
        }

        xbmp(const char *const path) : CommonMemberInit{
            std::ifstream f(path, std::ios::binary);
            if(f.fail()){
                throw(bmp_ReadError());
            }
            ctor_read(*this, f);
        }

        template<typename T, typename U>
        xbmp(std::basic_ifstream<T, U> &f) : CommonMemberInit{
            ctor_read(*this, f);
        }

        virtual ~xbmp(){
            delete[] ColorPalette_; ColorPalette_ = NULL;
            delete[] ImgData_; ImgData_ = NULL;
        }

#undef CommonMemberInit
    };

#ifdef _MSC_VER
#pragma warning(default:4290)
#pragma warning(default:4715)
#endif

#ifndef _MSC_VER
#undef _DEBUG
#endif

    typedef xbmp<void> bmp;

} //namespace tt_legacy
#endif // __TTXY_LEGACY_BMP__